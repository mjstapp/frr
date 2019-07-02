/*
 * Northbound management apis for FRR Zebra.
 *
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
 * XPath: /frr-zebra:zebra/workqueue-hold-timer
 */
static int zebra_workqueue_hold_timer_modify(enum nb_event event,
					     const struct lyd_node *dnode,
					     union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/zapi-packets
 */
static int zebra_zapi_packets_modify(enum nb_event event,
				     const struct lyd_node *dnode,
				     union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/table-id
 */
static int
zebra_import_kernel_table_table_id_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int
zebra_import_kernel_table_table_id_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/distance
 */
static int
zebra_import_kernel_table_distance_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/route-map
 */
static int
zebra_import_kernel_table_route_map_modify(enum nb_event event,
					   const struct lyd_node *dnode,
					   union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int
zebra_import_kernel_table_route_map_destroy(enum nb_event event,
					    const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/allow-external-route-update
 */
static int
zebra_allow_external_route_update_create(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int
zebra_allow_external_route_update_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/def-vrf
 */
static int zebra_vrf_vni_mapping_def_vrf_create(enum nb_event event,
						const struct lyd_node *dnode,
						union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int zebra_vrf_vni_mapping_def_vrf_destroy(enum nb_event event,
						 const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/vrf-id
 */
static int zebra_vrf_vni_mapping_vrf_id_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int zebra_vrf_vni_mapping_vrf_id_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/vni-id
 */
static int zebra_vrf_vni_mapping_vni_id_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int zebra_vrf_vni_mapping_vni_id_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/prefix-only
 */
static int
zebra_vrf_vni_mapping_prefix_only_create(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	/* TODO: implement me. */
	return NB_OK;
}

static int
zebra_vrf_vni_mapping_prefix_only_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-route-information
 */
static int get_route_information_rpc(const char *xpath,
				     const struct list *input,
				     struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-v6-mroute-info
 */
static int get_v6_mroute_info_rpc(const char *xpath, const struct list *input,
				  struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-vrf-info
 */
static int get_vrf_info_rpc(const char *xpath, const struct list *input,
			    struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-vrf-vni-info
 */
static int get_vrf_vni_info_rpc(const char *xpath, const struct list *input,
				struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-evpn-info
 */
static int get_evpn_info_rpc(const char *xpath, const struct list *input,
			     struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-vni-info
 */
static int get_vni_info_rpc(const char *xpath, const struct list *input,
			    struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-evpn-vni-rmac
 */
static int get_evpn_vni_rmac_rpc(const char *xpath, const struct list *input,
				 struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-evpn-vni-nexthops
 */
static int get_evpn_vni_nexthops_rpc(const char *xpath,
				     const struct list *input,
				     struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:clear-evpn-dup-addr
 */
static int clear_evpn_dup_addr_rpc(const char *xpath, const struct list *input,
				   struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
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
			.xpath = "/frr-zebra:zebra/workqueue-hold-timer",
			.cbs.modify = zebra_workqueue_hold_timer_modify,
		},
		{
			.xpath = "/frr-zebra:zebra/zapi-packets",
			.cbs.modify = zebra_zapi_packets_modify,
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/table-id",
			.cbs.modify = zebra_import_kernel_table_table_id_modify,
			.cbs.destroy = zebra_import_kernel_table_table_id_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/distance",
			.cbs.modify = zebra_import_kernel_table_distance_modify,
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/route-map",
			.cbs.modify = zebra_import_kernel_table_route_map_modify,
			.cbs.destroy = zebra_import_kernel_table_route_map_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/allow-external-route-update",
			.cbs.create = zebra_allow_external_route_update_create,
			.cbs.destroy = zebra_allow_external_route_update_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/def-vrf",
			.cbs.create = zebra_vrf_vni_mapping_def_vrf_create,
			.cbs.destroy = zebra_vrf_vni_mapping_def_vrf_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/vrf-id",
			.cbs.modify = zebra_vrf_vni_mapping_vrf_id_modify,
			.cbs.destroy = zebra_vrf_vni_mapping_vrf_id_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/vni-id",
			.cbs.modify = zebra_vrf_vni_mapping_vni_id_modify,
			.cbs.destroy = zebra_vrf_vni_mapping_vni_id_destroy,
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/prefix-only",
			.cbs.create = zebra_vrf_vni_mapping_prefix_only_create,
			.cbs.destroy = zebra_vrf_vni_mapping_prefix_only_destroy,
		},
		{
			.xpath = "/frr-zebra:get-route-information",
			.cbs.rpc = get_route_information_rpc,
		},
		{
			.xpath = "/frr-zebra:get-v6-mroute-info",
			.cbs.rpc = get_v6_mroute_info_rpc,
		},
		{
			.xpath = "/frr-zebra:get-vrf-info",
			.cbs.rpc = get_vrf_info_rpc,
		},
		{
			.xpath = "/frr-zebra:get-vrf-vni-info",
			.cbs.rpc = get_vrf_vni_info_rpc,
		},
		{
			.xpath = "/frr-zebra:get-evpn-info",
			.cbs.rpc = get_evpn_info_rpc,
		},
		{
			.xpath = "/frr-zebra:get-vni-info",
			.cbs.rpc = get_vni_info_rpc,
		},
		{
			.xpath = "/frr-zebra:get-evpn-vni-rmac",
			.cbs.rpc = get_evpn_vni_rmac_rpc,
		},
		{
			.xpath = "/frr-zebra:get-evpn-vni-nexthops",
			.cbs.rpc = get_evpn_vni_nexthops_rpc,
		},
		{
			.xpath = "/frr-zebra:clear-evpn-dup-addr",
			.cbs.rpc = clear_evpn_dup_addr_rpc,
		},
		{
			.xpath = NULL,
		},
	}
};
