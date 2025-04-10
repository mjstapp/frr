#!/usr/bin/env python3

#
# test_bgp_vpnv4_ebgp.py
# Part of NetDEF Topology Tests
#
# Copyright (c) 2022 by 6WIND
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose with or without fee is hereby granted, provided
# that the above copyright notice and this permission notice appear
# in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND NETDEF DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL NETDEF BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY
# DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
# WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
# ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
# OF THIS SOFTWARE.
#

"""
 test_bgp_vpnv4_ebgp.py: Test the FRR BGP RTC feature with VPNV4, EBGP
"""

import os
import sys
import json
from functools import partial
import pytest

# Save the Current Working Directory to find configuration files.
CWD = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.join(CWD, "../"))

# pylint: disable=C0413
# Import topogen and topotest helpers
from lib import topotest
from lib.topogen import Topogen, TopoRouter, get_topogen
from lib.topolog import logger

# Required to instantiate the topology builder class.


pytestmark = [pytest.mark.bgpd]


def build_topo(tgen):
    "Build function"

    # Create 2 routers; one link between the two, one vrf shared, and a
    # second vrf on "r2"
    tgen.add_router("r1")
    tgen.add_router("r2")

    switch = tgen.add_switch("s1")
    switch.add_link(tgen.gears["r1"])
    switch.add_link(tgen.gears["r2"])

    switch = tgen.add_switch("s2")
    switch.add_link(tgen.gears["r1"])

    switch = tgen.add_switch("s3")
    switch.add_link(tgen.gears["r2"])

    switch = tgen.add_switch("s4")
    switch.add_link(tgen.gears["r2"])

def _populate_iface():
    tgen = get_topogen()
    cmds_list = [
        'ip link add vrf1 type vrf table 10',
        'echo 100000 > /proc/sys/net/mpls/platform_labels',
        'ip link set dev vrf1 up',
        'ip link set dev {0}-eth1 master vrf1',
        'echo 1 > /proc/sys/net/mpls/conf/{0}-eth0/input',
    ]

    # Second vrf for r2
    r2_cmds_list = [
        'ip link add vrf2 type vrf table 200',
        'ip link set dev vrf2 up',
        'ip link set dev r2-eth2 master vrf2',
    ]

    for cmd in cmds_list:
        instr = cmd.format('r1', '1', '2')
        logger.info('input: ' + instr)
        output = tgen.net['r1'].cmd(instr)
        logger.info('output: ' + output)

    for cmd in cmds_list:
        instr = cmd.format('r2', '2', '1')
        logger.info('input: ' + instr)
        output = tgen.net['r2'].cmd(instr)
        logger.info('output: ' + output)

    for cmd in r2_cmds_list:
        output = tgen.net['r2'].cmd(cmd)

def setup_module(mod):
    "Sets up the pytest environment"
    tgen = Topogen(build_topo, mod.__name__)
    tgen.start_topology()

    router_list = tgen.routers()
    _populate_iface()

    for rname, router in router_list.items():
        router.load_config(
            TopoRouter.RD_ZEBRA, os.path.join(
                CWD, "{}_vpnv4/zebra.conf".format(rname))
        )
        router.load_config(
            TopoRouter.RD_BGP, os.path.join(
                CWD, "{}_vpnv4/bgpd.conf".format(rname))
        )

    # Initialize all routers.
    tgen.start_router()


def teardown_module(_mod):
    "Teardown the pytest environment"
    tgen = get_topogen()

    tgen.stop_topology()


def test_protocols_convergence():
    """
    Assert that all protocols have converged
    statuses as they depend on it.
    """
    tgen = get_topogen()
    if tgen.routers_have_failure():
        pytest.skip(tgen.errors)

    router = tgen.gears['r1']
    logger.info("Dump some context for r1")
    router.vtysh_cmd("show bgp ipv4 vpn")
    router.vtysh_cmd("show bgp summary")
    router.vtysh_cmd("show bgp vrf vrf1 ipv4")
    router.vtysh_cmd("show running-config")
    router = tgen.gears['r2']
    logger.info("Dump some context for r2")
    router.vtysh_cmd("show bgp ipv4 vpn")
    router.vtysh_cmd("show bgp summary")
    router.vtysh_cmd("show bgp vrf vrf1 ipv4")
    router.vtysh_cmd("show running-config")

    # Check IPv4 routing tables on r1
    logger.info("Checking IPv4 routes for convergence on r1")
    router = tgen.gears['r1']
    json_file = "{}/{}_vpnv4/ipv4_routes.json".format(CWD, router.name)
    if not os.path.isfile(json_file):
        logger.info("skipping file {}".format(json_file))
        assert 0, 'ipv4_routes.json file not found'
        return

    expected = json.loads(open(json_file).read())
    test_func = partial(
        topotest.router_json_cmp,
        router,
        "show ip route vrf vrf1 json",
        expected,
    )
    _, result = topotest.run_and_expect(test_func, None, count=40, wait=2)
    assertmsg = '"{}" JSON output mismatches'.format(router.name)
    assert result is None, assertmsg

    # tgen.cli()

    # Check BGP IPv4 routing tables on r2 not installed
    logger.info("Checking BGP IPv4 routes for convergence on r2")
    router = tgen.gears['r2']
    json_file = "{}/{}_vpnv4/bgp_ipv4_routes.json".format(CWD, router.name)
    if not os.path.isfile(json_file):
        assert 0, 'bgp_ipv4_routes.json file not found'

    expected = json.loads(open(json_file).read())
    test_func = partial(
        topotest.router_json_cmp,
        router,
        "show bgp vrf vrf1 ipv4 json",
        expected,
    )
    _, result = topotest.run_and_expect(test_func, None, count=40, wait=2)
    assertmsg = '"{}" JSON output mismatches'.format(router.name)
    assert result is None, assertmsg

#
# Helper to check one route's paths' RTs
#
def check_one_route_rts(jroute):

    for jpath in jroute:
        jrt = jpath["extendedCommunity"]
        if "52:222" in jrt["string"]:
            return False

    return True

def test_rtc():
    """
    Verify that r1 does not receive routes with an RT it does not import
    """
    tgen = get_topogen()
    if tgen.routers_have_failure():
        pytest.skip(tgen.errors)

    logger.info("Checking RTC filtering at router r1")

    # Examine the vpn RIB, checking the routes' RTs
    r1 = tgen.gears["r1"]
    outstr = r1.vtysh_cmd("show bgp ipv4 vpn detail-routes json")
    jfile = json.loads(outstr)

    # get at the RDs inside the json blob. Each RD has a dict of prefixes;
    # each prefix has a list of paths; each path has a dict including the
    # ecommunity string
    jrds = jfile["routes"]["routeDistinguishers"]
    for jrdstr in jrds:
        jrd = jrds[jrdstr]
        for jroute in jrd:
            jobj = jrd[jroute]
            assertmsg = "Error: route {} fails the RT check".format(jroute)
            assert check_one_route_rts(jobj) == True, assertmsg

def test_memory_leak():
    "Run the memory leak test and report results."
    tgen = get_topogen()
    if not tgen.is_memleak_enabled():
        pytest.skip("Memory leak test/report is disabled")

    tgen.report_memory_leaks()


if __name__ == "__main__":
    args = ["-s"] + sys.argv[1:]
    sys.exit(pytest.main(args))
