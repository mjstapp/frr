#!/usr/bin/env python
#
# SPDX-License-Identifier: GPL-2.0-or-later
#
# Portions copyright (c) 2019 by 6WIND
#

"""
 test_bgp_rt5_rtc.py: Test RTC with ibgp and l3vni
"""

import os
import sys
import pytest
import platform

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

    tgen.add_router("r1")
    tgen.add_router("r2")

    switch = tgen.add_switch("s1")
    switch.add_link(tgen.gears["r1"])
    switch.add_link(tgen.gears["r2"])

    switch = tgen.add_switch("s2")
    switch.add_link(tgen.gears["r1"])

    switch = tgen.add_switch("s3")
    switch.add_link(tgen.gears["r2"])


def setup_module(mod):
    "Sets up the pytest environment"

    tgen = Topogen(build_topo, mod.__name__)
    tgen.start_topology()

    router_list = tgen.routers()

    krel = platform.release()
    if topotest.version_cmp(krel, "4.18") < 0:
        logger.info(
            'BGP RTC EVPN RT5 tests will not run (have kernel "{}", but it requires 4.18)'.format(
                krel
            )
        )
        return pytest.skip("Skipping BGP RTC EVPN RT5 Test. Kernel not supported")

    # create VRF vrf-101 on R1 and R2
    cmds_vrflite = [
        "ip link add {}-vrf-101 type vrf table 101",
        "ip link set dev {}-vrf-101 up",
        "ip link add loop101 type dummy",
        "ip link set dev loop101 master {}-vrf-101",
        "ip link set dev loop101 up",
    ]

    cmds_r2 = [  # config routing 101
        "ip link add name bridge-101 up type bridge stp_state 0",
        "ip link set bridge-101 master {}-vrf-101",
        "ip link set dev bridge-101 up",
        "ip link add name vxlan-101 type vxlan id 101 dstport 4789 dev r2-eth0 local 192.168.100.41",
        "ip link set dev vxlan-101 master bridge-101",
        "ip link set vxlan-101 up type bridge_slave learning off flood off mcast_flood off",
    ]

    router = tgen.gears["r1"]
    for cmd in cmds_vrflite:
        logger.info("cmd to r1: " + cmd.format("r1"))
        output = router.cmd_raises(cmd.format("r1"))
        logger.info("result: " + output)

    router = tgen.gears["r2"]
    for cmd in cmds_vrflite:
        logger.info("cmd to r2: " + cmd.format("r2"))
        output = router.cmd_raises(cmd.format("r2"))
        logger.info("result: " + output)

    for cmd in cmds_r2:
        logger.info("cmd to r2: " + cmd.format("r2"))
        output = router.cmd_raises(cmd.format("r2"))
        logger.info("result: " + output)

    tgen.net["r1"].cmd_raises(
        "ip link add name vxlan-101 type vxlan id 101 dstport 4789 dev r1-eth0 local 192.168.100.21"
    )
    tgen.net["r1"].cmd_raises("ip link set lo up")
    tgen.net["r1"].cmd_raises(
        "ip link add name bridge-101 type bridge stp_state 0"
    )
    tgen.net["r1"].cmd_raises("ip link set bridge-101 master r1-vrf-101")
    tgen.net["r1"].cmd_raises(
        "ip link set dev vxlan-101 master bridge-101"
    )
    tgen.net["r1"].cmd_raises("ip link set bridge-101 up")
    tgen.net["r1"].cmd_raises("ip link set vxlan-101 up")

    # Load frr configs
    for rname, router in router_list.items():
        router.load_frr_config(
            os.path.join(CWD, "{}_evpn_rt5/frr.conf".format(rname))
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
    topotest.sleep(4, "waiting 4 seconds for bgp convergence")

    # Check IPv4/IPv6 routing tables.
    output = tgen.gears["r1"].vtysh_cmd("show bgp l2vpn evpn", isjson=False)
    logger.info("==== result from show bgp l2vpn evpn")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd(
        "show bgp l2vpn evpn route detail", isjson=False
    )
    logger.info("==== result from show bgp l2vpn evpn route detail")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show bgp vrf r1-vrf-101 ipv4", isjson=False)
    logger.info("==== result from show bgp vrf r1-vrf-101 ipv4")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show bgp vrf r1-vrf-101", isjson=False)
    logger.info("==== result from show bgp vrf r1-vrf-101 ")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show ip route vrf r1-vrf-101", isjson=False)
    logger.info("==== result from show ip route vrf r1-vrf-101")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show evpn vni detail", isjson=False)
    logger.info("==== result from show evpn vni detail")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show evpn next-hops vni all", isjson=False)
    logger.info("==== result from show evpn next-hops vni all")
    logger.info(output)
    output = tgen.gears["r1"].vtysh_cmd("show evpn rmac vni all", isjson=False)
    logger.info("==== result from show evpn next-hops vni all")
    logger.info(output)

    # Check IPv4 and IPv6 connectivity between r1 and r2 ( routing vxlan evpn)
    pingrouter = tgen.gears["r1"]
    logger.info(
        "Check Ping IPv4 from  R1(r1-vrf-101) to R2(r2-vrf-101 = 192.168.101.41)"
    )
    output = pingrouter.run("ping -I r1-vrf-101 192.168.101.41 -f -c 100")
    logger.info(output)

    if "100 packets transmitted, 100 received" not in output:
        assertmsg = (
            "expected ping IPv4 from R1(r1-vrf-101) to R2(192.168.101.41) should be ok"
        )
        assert 0, assertmsg
    else:
        logger.info("Check Ping IPv4 from R1(r1-vrf-101) to R2(192.168.101.41) OK")


def test_memory_leak():
    "Run the memory leak test and report results."
    tgen = get_topogen()
    if not tgen.is_memleak_enabled():
        pytest.skip("Memory leak test/report is disabled")

    tgen.report_memory_leaks()


if __name__ == "__main__":
    args = ["-s"] + sys.argv[1:]
    sys.exit(pytest.main(args))
