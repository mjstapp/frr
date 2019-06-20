/*
 * Northbound management apis for FRR Zebra.
 *
 * Copyright (C) 2002 Kunihiro Ishiguro
 * Copyright (C) 2019 Volta Networks, Inc.
 *                    Mark Stapp
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "lib/northbound.h"

/*
 * XPath: /frr-zebra:zebra/mcast-rpf-lookup
 */
static int zebra_mcast_rpf_lookup_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ip-forwarding
 */
static int zebra_ip_forwarding_modify(enum nb_event event,
				      const struct lyd_node *dnode,
				      union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int zebra_ip_forwarding_destroy(enum nb_event event,
				       const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ipv6-forwarding
 */
static int zebra_ipv6_forwarding_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int zebra_ipv6_forwarding_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route
 */
static const void *
zebra_state_routes_v4_route_get_next(const void *parent_list_entry,
				     const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int zebra_state_routes_v4_route_get_keys(const void *list_entry,
						struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *
zebra_state_routes_v4_route_lookup_entry(const void *parent_list_entry,
					 const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/prefix
 */
static struct yang_data *
zebra_state_routes_v4_route_prefix_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/protocol
 */
static struct yang_data *
zebra_state_routes_v4_route_protocol_get_elem(const char *xpath,
					      const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/vrf
 */
static struct yang_data *
zebra_state_routes_v4_route_vrf_get_elem(const char *xpath,
					 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/distance
 */
static struct yang_data *
zebra_state_routes_v4_route_distance_get_elem(const char *xpath,
					      const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/metric
 */
static struct yang_data *
zebra_state_routes_v4_route_metric_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/tag
 */
static struct yang_data *
zebra_state_routes_v4_route_tag_get_elem(const char *xpath,
					 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/is_selected
 */
static struct yang_data *
zebra_state_routes_v4_route_is_selected_get_elem(const char *xpath,
						 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/is_installed
 */
static struct yang_data *
zebra_state_routes_v4_route_is_installed_get_elem(const char *xpath,
						  const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/is_failed
 */
static struct yang_data *
zebra_state_routes_v4_route_is_failed_get_elem(const char *xpath,
					       const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/is_queued
 */
static struct yang_data *
zebra_state_routes_v4_route_is_queued_get_elem(const char *xpath,
					       const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/internal_flags
 */
static struct yang_data *
zebra_state_routes_v4_route_internal_flags_get_elem(const char *xpath,
						    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/internal_status
 */
static struct yang_data *
zebra_state_routes_v4_route_internal_status_get_elem(const char *xpath,
						     const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/uptime
 */
static struct yang_data *
zebra_state_routes_v4_route_uptime_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/name
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_name_get_elem(const char *xpath,
							const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry
 */
static const void *zebra_state_routes_v4_route_nexthop_group_entry_get_next(
	const void *parent_list_entry, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int zebra_state_routes_v4_route_nexthop_group_entry_get_keys(
	const void *list_entry, struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *zebra_state_routes_v4_route_nexthop_group_entry_lookup_entry(
	const void *parent_list_entry, const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/id
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_id_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/nh-type
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_nh_type_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/gateway
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_gateway_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/vrf
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_vrf_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/interface
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_interface_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/bh-type
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_bh_type_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/flags
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_flags_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-duplicate
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_is_duplicate_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-recursive
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_is_recursive_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-onlink
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_is_onlink_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-active
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_is_active_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry
 */
static const void *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_get_next(
	const void *parent_list_entry, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_get_keys(
	const void *list_entry, struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_lookup_entry(
	const void *parent_list_entry, const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/id
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_id_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/label
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_label_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/ttl
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_ttl_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/traffic-class
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_traffic_class_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mtu
 */
static struct yang_data *
zebra_state_routes_v4_route_nexthop_group_entry_mtu_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route
 */
static const void *
zebra_state_routes_v6_route_get_next(const void *parent_list_entry,
				     const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int zebra_state_routes_v6_route_get_keys(const void *list_entry,
						struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *
zebra_state_routes_v6_route_lookup_entry(const void *parent_list_entry,
					 const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/prefix
 */
static struct yang_data *
zebra_state_routes_v6_route_prefix_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/protocol
 */
static struct yang_data *
zebra_state_routes_v6_route_protocol_get_elem(const char *xpath,
					      const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/vrf
 */
static struct yang_data *
zebra_state_routes_v6_route_vrf_get_elem(const char *xpath,
					 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/distance
 */
static struct yang_data *
zebra_state_routes_v6_route_distance_get_elem(const char *xpath,
					      const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/metric
 */
static struct yang_data *
zebra_state_routes_v6_route_metric_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/tag
 */
static struct yang_data *
zebra_state_routes_v6_route_tag_get_elem(const char *xpath,
					 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/is_selected
 */
static struct yang_data *
zebra_state_routes_v6_route_is_selected_get_elem(const char *xpath,
						 const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/is_installed
 */
static struct yang_data *
zebra_state_routes_v6_route_is_installed_get_elem(const char *xpath,
						  const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/is_failed
 */
static struct yang_data *
zebra_state_routes_v6_route_is_failed_get_elem(const char *xpath,
					       const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/is_queued
 */
static struct yang_data *
zebra_state_routes_v6_route_is_queued_get_elem(const char *xpath,
					       const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/internal_flags
 */
static struct yang_data *
zebra_state_routes_v6_route_internal_flags_get_elem(const char *xpath,
						    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/internal_status
 */
static struct yang_data *
zebra_state_routes_v6_route_internal_status_get_elem(const char *xpath,
						     const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/uptime
 */
static struct yang_data *
zebra_state_routes_v6_route_uptime_get_elem(const char *xpath,
					    const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/name
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_name_get_elem(const char *xpath,
							const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry
 */
static const void *zebra_state_routes_v6_route_nexthop_group_entry_get_next(
	const void *parent_list_entry, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int zebra_state_routes_v6_route_nexthop_group_entry_get_keys(
	const void *list_entry, struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *zebra_state_routes_v6_route_nexthop_group_entry_lookup_entry(
	const void *parent_list_entry, const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/id
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_id_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/nh-type
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_nh_type_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/gateway
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_gateway_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/vrf
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_vrf_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/interface
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_interface_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/bh-type
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_bh_type_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/flags
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_flags_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-duplicate
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_is_duplicate_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-recursive
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_is_recursive_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-onlink
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_is_onlink_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-active
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_is_active_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry
 */
static const void *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_get_next(
	const void *parent_list_entry, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

static int
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_get_keys(
	const void *list_entry, struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NB_OK;
}

static const void *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_lookup_entry(
	const void *parent_list_entry, const struct yang_list_keys *keys)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/id
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_id_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/label
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_label_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/ttl
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_ttl_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath:
 * /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/traffic-class
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_traffic_class_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/*
 * XPath: /frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mtu
 */
static struct yang_data *
zebra_state_routes_v6_route_nexthop_group_entry_mtu_get_elem(
	const char *xpath, const void *list_entry)
{
	/* TODO: implement me. */
	return NULL;
}

/* clang-format off */
const struct frr_yang_module_info frr_zebra_info = {
	.name = "frr-zebra",
	.nodes = {
		{
			.xpath = "/frr-zebra:zebra/mcast-rpf-lookup",
			.cbs.modify = zebra_mcast_rpf_lookup_modify,
		},
		{
			.xpath = "/frr-zebra:zebra/ip-forwarding",
			.cbs.modify = zebra_ip_forwarding_modify,
			.cbs.destroy = zebra_ip_forwarding_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/ipv6-forwarding",
			.cbs.modify = zebra_ipv6_forwarding_modify,
			.cbs.destroy = zebra_ipv6_forwarding_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route",
			.cbs.get_next = zebra_state_routes_v4_route_get_next,
			.cbs.get_keys = zebra_state_routes_v4_route_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v4_route_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/prefix",
			.cbs.get_elem = zebra_state_routes_v4_route_prefix_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/protocol",
			.cbs.get_elem = zebra_state_routes_v4_route_protocol_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/vrf",
			.cbs.get_elem = zebra_state_routes_v4_route_vrf_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/distance",
			.cbs.get_elem = zebra_state_routes_v4_route_distance_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/metric",
			.cbs.get_elem = zebra_state_routes_v4_route_metric_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/tag",
			.cbs.get_elem = zebra_state_routes_v4_route_tag_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/is_selected",
			.cbs.get_elem = zebra_state_routes_v4_route_is_selected_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/is_installed",
			.cbs.get_elem = zebra_state_routes_v4_route_is_installed_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/is_failed",
			.cbs.get_elem = zebra_state_routes_v4_route_is_failed_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/is_queued",
			.cbs.get_elem = zebra_state_routes_v4_route_is_queued_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/internal_flags",
			.cbs.get_elem = zebra_state_routes_v4_route_internal_flags_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/internal_status",
			.cbs.get_elem = zebra_state_routes_v4_route_internal_status_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/uptime",
			.cbs.get_elem = zebra_state_routes_v4_route_uptime_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/name",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_name_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry",
			.cbs.get_next = zebra_state_routes_v4_route_nexthop_group_entry_get_next,
			.cbs.get_keys = zebra_state_routes_v4_route_nexthop_group_entry_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v4_route_nexthop_group_entry_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/id",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_id_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/nh-type",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_nh_type_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/gateway",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_gateway_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/vrf",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_vrf_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/interface",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_interface_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/bh-type",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_bh_type_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/flags",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_flags_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-duplicate",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_is_duplicate_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-recursive",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_is_recursive_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-onlink",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_is_onlink_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/is-active",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_is_active_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry",
			.cbs.get_next = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_get_next,
			.cbs.get_keys = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/id",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_id_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/label",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_label_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/ttl",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_ttl_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mpls-label-stack/entry/traffic-class",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_mpls_label_stack_entry_traffic_class_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v4/route/nexthop-group/entry/mtu",
			.cbs.get_elem = zebra_state_routes_v4_route_nexthop_group_entry_mtu_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route",
			.cbs.get_next = zebra_state_routes_v6_route_get_next,
			.cbs.get_keys = zebra_state_routes_v6_route_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v6_route_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/prefix",
			.cbs.get_elem = zebra_state_routes_v6_route_prefix_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/protocol",
			.cbs.get_elem = zebra_state_routes_v6_route_protocol_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/vrf",
			.cbs.get_elem = zebra_state_routes_v6_route_vrf_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/distance",
			.cbs.get_elem = zebra_state_routes_v6_route_distance_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/metric",
			.cbs.get_elem = zebra_state_routes_v6_route_metric_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/tag",
			.cbs.get_elem = zebra_state_routes_v6_route_tag_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/is_selected",
			.cbs.get_elem = zebra_state_routes_v6_route_is_selected_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/is_installed",
			.cbs.get_elem = zebra_state_routes_v6_route_is_installed_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/is_failed",
			.cbs.get_elem = zebra_state_routes_v6_route_is_failed_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/is_queued",
			.cbs.get_elem = zebra_state_routes_v6_route_is_queued_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/internal_flags",
			.cbs.get_elem = zebra_state_routes_v6_route_internal_flags_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/internal_status",
			.cbs.get_elem = zebra_state_routes_v6_route_internal_status_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/uptime",
			.cbs.get_elem = zebra_state_routes_v6_route_uptime_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/name",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_name_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry",
			.cbs.get_next = zebra_state_routes_v6_route_nexthop_group_entry_get_next,
			.cbs.get_keys = zebra_state_routes_v6_route_nexthop_group_entry_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v6_route_nexthop_group_entry_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/id",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_id_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/nh-type",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_nh_type_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/gateway",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_gateway_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/vrf",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_vrf_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/interface",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_interface_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/bh-type",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_bh_type_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/flags",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_flags_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-duplicate",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_is_duplicate_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-recursive",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_is_recursive_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-onlink",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_is_onlink_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/is-active",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_is_active_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry",
			.cbs.get_next = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_get_next,
			.cbs.get_keys = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_get_keys,
			.cbs.lookup_entry = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_lookup_entry,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/id",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_id_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/label",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_label_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/ttl",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_ttl_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mpls-label-stack/entry/traffic-class",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_mpls_label_stack_entry_traffic_class_get_elem,
		},
		{
			.xpath = "/frr-zebra:zebra/state/routes-v6/route/nexthop-group/entry/mtu",
			.cbs.get_elem = zebra_state_routes_v6_route_nexthop_group_entry_mtu_get_elem,
		},
		{
			.xpath = NULL,
		},
	}
};
