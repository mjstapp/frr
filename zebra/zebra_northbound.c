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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ip-forwarding
 */
static int zebra_ip_forwarding_modify(enum nb_event event,
				      const struct lyd_node *dnode,
				      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_ip_forwarding_destroy(enum nb_event event,
				       const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ipv6-forwarding
 */
static int zebra_ipv6_forwarding_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_ipv6_forwarding_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/workqueue-hold-timer
 */
static int zebra_workqueue_hold_timer_modify(enum nb_event event,
					     const struct lyd_node *dnode,
					     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/zapi-packets
 */
static int zebra_zapi_packets_modify(enum nb_event event,
				     const struct lyd_node *dnode,
				     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_import_kernel_table_table_id_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_import_kernel_table_route_map_destroy(enum nb_event event,
					    const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_allow_external_route_update_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/dplane-queue-limit
 */
static int zebra_dplane_queue_limit_modify(enum nb_event event,
					   const struct lyd_node *dnode,
					   union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping
 */
static int zebra_vrf_vni_mapping_create(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_vrf_vni_mapping_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/vni-id
 */
static int zebra_vrf_vni_mapping_vni_id_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_vrf_vni_mapping_vni_id_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_vrf_vni_mapping_prefix_only_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-events
 */
static int zebra_debugs_debug_events_modify(enum nb_event event,
					    const struct lyd_node *dnode,
					    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_events_destroy(enum nb_event event,
					     const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-send
 */
static int zebra_debugs_debug_zapi_send_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_zapi_send_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-recv
 */
static int zebra_debugs_debug_zapi_recv_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_zapi_recv_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-detail
 */
static int zebra_debugs_debug_zapi_detail_modify(enum nb_event event,
						 const struct lyd_node *dnode,
						 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_zapi_detail_destroy(enum nb_event event,
						  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel
 */
static int zebra_debugs_debug_kernel_modify(enum nb_event event,
					    const struct lyd_node *dnode,
					    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_kernel_destroy(enum nb_event event,
					     const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel-msg-send
 */
static int
zebra_debugs_debug_kernel_msg_send_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_debugs_debug_kernel_msg_send_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel-msg-recv
 */
static int
zebra_debugs_debug_kernel_msg_recv_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_debugs_debug_kernel_msg_recv_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-rib
 */
static int zebra_debugs_debug_rib_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_rib_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-rib-detail
 */
static int zebra_debugs_debug_rib_detail_modify(enum nb_event event,
						const struct lyd_node *dnode,
						union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_rib_detail_destroy(enum nb_event event,
						 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-fpm
 */
static int zebra_debugs_debug_fpm_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_fpm_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-nht
 */
static int zebra_debugs_debug_nht_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_nht_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-nht-detail
 */
static int zebra_debugs_debug_nht_detail_modify(enum nb_event event,
						const struct lyd_node *dnode,
						union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_nht_detail_destroy(enum nb_event event,
						 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-mpls
 */
static int zebra_debugs_debug_mpls_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_mpls_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-vxlan
 */
static int zebra_debugs_debug_vxlan_modify(enum nb_event event,
					   const struct lyd_node *dnode,
					   union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_vxlan_destroy(enum nb_event event,
					    const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-pw
 */
static int zebra_debugs_debug_pw_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_pw_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-dplane
 */
static int zebra_debugs_debug_dplane_modify(enum nb_event event,
					    const struct lyd_node *dnode,
					    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_dplane_destroy(enum nb_event event,
					     const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-dplane-detail
 */
static int zebra_debugs_debug_dplane_detail_modify(enum nb_event event,
						   const struct lyd_node *dnode,
						   union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
zebra_debugs_debug_dplane_detail_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-mlag
 */
static int zebra_debugs_debug_mlag_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int zebra_debugs_debug_mlag_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

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

/*
 * XPath: /frr-zebra:get-evpn-macs
 */
static int get_evpn_macs_rpc(const char *xpath, const struct list *input,
			     struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-evpn-arp-cache
 */
static int get_evpn_arp_cache_rpc(const char *xpath, const struct list *input,
				  struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-pbr-ipset
 */
static int get_pbr_ipset_rpc(const char *xpath, const struct list *input,
			     struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-pbr-iptable
 */
static int get_pbr_iptable_rpc(const char *xpath, const struct list *input,
			       struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-zebra:get-debugs
 */
static int get_debugs_rpc(const char *xpath, const struct list *input,
			  struct list *output)
{
	/* TODO: implement me. */
	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list
 */
static int
lib_interface_zebra_ip4_addr_list_create(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
lib_interface_zebra_ip4_addr_list_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list/ip4-peer
 */
static int
lib_interface_zebra_ip4_addr_list_ip4_peer_modify(enum nb_event event,
						  const struct lyd_node *dnode,
						  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
lib_interface_zebra_ip4_addr_list_ip4_peer_destroy(enum nb_event event,
						   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list/label
 */
static int
lib_interface_zebra_ip4_addr_list_label_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
lib_interface_zebra_ip4_addr_list_label_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip6-addr-list
 */
static int
lib_interface_zebra_ip6_addr_list_create(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
lib_interface_zebra_ip6_addr_list_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip6-addr-list/label
 */
static int
lib_interface_zebra_ip6_addr_list_label_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int
lib_interface_zebra_ip6_addr_list_label_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/multicast
 */
static int lib_interface_zebra_multicast_modify(enum nb_event event,
						const struct lyd_node *dnode,
						union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int lib_interface_zebra_multicast_destroy(enum nb_event event,
						 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/link-detect
 */
static int lib_interface_zebra_link_detect_modify(enum nb_event event,
						  const struct lyd_node *dnode,
						  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int lib_interface_zebra_link_detect_destroy(enum nb_event event,
						   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/shutdown
 */
static int lib_interface_zebra_shutdown_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int lib_interface_zebra_shutdown_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/bandwidth
 */
static int lib_interface_zebra_bandwidth_modify(enum nb_event event,
						const struct lyd_node *dnode,
						union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

static int lib_interface_zebra_bandwidth_destroy(enum nb_event event,
						 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/* clang-format off */
const struct frr_yang_module_info frr_zebra_info = {
	.name = "frr-zebra",
	.nodes = {
		{
			.xpath = "/frr-zebra:zebra/mcast-rpf-lookup",
			.cbs = {
				.modify = zebra_mcast_rpf_lookup_modify,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/ip-forwarding",
			.cbs = {
				.modify = zebra_ip_forwarding_modify,
				.destroy = zebra_ip_forwarding_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/ipv6-forwarding",
			.cbs = {
				.modify = zebra_ipv6_forwarding_modify,
				.destroy = zebra_ipv6_forwarding_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/workqueue-hold-timer",
			.cbs = {
				.modify = zebra_workqueue_hold_timer_modify,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/zapi-packets",
			.cbs = {
				.modify = zebra_zapi_packets_modify,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/table-id",
			.cbs = {
				.modify = zebra_import_kernel_table_table_id_modify,
				.destroy = zebra_import_kernel_table_table_id_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/distance",
			.cbs = {
				.modify = zebra_import_kernel_table_distance_modify,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/import-kernel-table/route-map",
			.cbs = {
				.modify = zebra_import_kernel_table_route_map_modify,
				.destroy = zebra_import_kernel_table_route_map_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/allow-external-route-update",
			.cbs = {
				.create = zebra_allow_external_route_update_create,
				.destroy = zebra_allow_external_route_update_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/dplane-queue-limit",
			.cbs = {
				.modify = zebra_dplane_queue_limit_modify,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping",
			.cbs = {
				.create = zebra_vrf_vni_mapping_create,
				.destroy = zebra_vrf_vni_mapping_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/vni-id",
			.cbs = {
				.modify = zebra_vrf_vni_mapping_vni_id_modify,
				.destroy = zebra_vrf_vni_mapping_vni_id_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/vrf-vni-mapping/prefix-only",
			.cbs = {
				.create = zebra_vrf_vni_mapping_prefix_only_create,
				.destroy = zebra_vrf_vni_mapping_prefix_only_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-events",
			.cbs = {
				.modify = zebra_debugs_debug_events_modify,
				.destroy = zebra_debugs_debug_events_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-zapi-send",
			.cbs = {
				.modify = zebra_debugs_debug_zapi_send_modify,
				.destroy = zebra_debugs_debug_zapi_send_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-zapi-recv",
			.cbs = {
				.modify = zebra_debugs_debug_zapi_recv_modify,
				.destroy = zebra_debugs_debug_zapi_recv_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-zapi-detail",
			.cbs = {
				.modify = zebra_debugs_debug_zapi_detail_modify,
				.destroy = zebra_debugs_debug_zapi_detail_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-kernel",
			.cbs = {
				.modify = zebra_debugs_debug_kernel_modify,
				.destroy = zebra_debugs_debug_kernel_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-kernel-msg-send",
			.cbs = {
				.modify = zebra_debugs_debug_kernel_msg_send_modify,
				.destroy = zebra_debugs_debug_kernel_msg_send_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-kernel-msg-recv",
			.cbs = {
				.modify = zebra_debugs_debug_kernel_msg_recv_modify,
				.destroy = zebra_debugs_debug_kernel_msg_recv_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-rib",
			.cbs = {
				.modify = zebra_debugs_debug_rib_modify,
				.destroy = zebra_debugs_debug_rib_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-rib-detail",
			.cbs = {
				.modify = zebra_debugs_debug_rib_detail_modify,
				.destroy = zebra_debugs_debug_rib_detail_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-fpm",
			.cbs = {
				.modify = zebra_debugs_debug_fpm_modify,
				.destroy = zebra_debugs_debug_fpm_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-nht",
			.cbs = {
				.modify = zebra_debugs_debug_nht_modify,
				.destroy = zebra_debugs_debug_nht_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-nht-detail",
			.cbs = {
				.modify = zebra_debugs_debug_nht_detail_modify,
				.destroy = zebra_debugs_debug_nht_detail_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-mpls",
			.cbs = {
				.modify = zebra_debugs_debug_mpls_modify,
				.destroy = zebra_debugs_debug_mpls_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-vxlan",
			.cbs = {
				.modify = zebra_debugs_debug_vxlan_modify,
				.destroy = zebra_debugs_debug_vxlan_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-pw",
			.cbs = {
				.modify = zebra_debugs_debug_pw_modify,
				.destroy = zebra_debugs_debug_pw_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-dplane",
			.cbs = {
				.modify = zebra_debugs_debug_dplane_modify,
				.destroy = zebra_debugs_debug_dplane_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-dplane-detail",
			.cbs = {
				.modify = zebra_debugs_debug_dplane_detail_modify,
				.destroy = zebra_debugs_debug_dplane_detail_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:zebra/debugs/debug-mlag",
			.cbs = {
				.modify = zebra_debugs_debug_mlag_modify,
				.destroy = zebra_debugs_debug_mlag_destroy,
			}
		},
		{
			.xpath = "/frr-zebra:get-route-information",
			.cbs = {
				.rpc = get_route_information_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-v6-mroute-info",
			.cbs = {
				.rpc = get_v6_mroute_info_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-vrf-info",
			.cbs = {
				.rpc = get_vrf_info_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-vrf-vni-info",
			.cbs = {
				.rpc = get_vrf_vni_info_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-evpn-info",
			.cbs = {
				.rpc = get_evpn_info_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-vni-info",
			.cbs = {
				.rpc = get_vni_info_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-evpn-vni-rmac",
			.cbs = {
				.rpc = get_evpn_vni_rmac_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-evpn-vni-nexthops",
			.cbs = {
				.rpc = get_evpn_vni_nexthops_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:clear-evpn-dup-addr",
			.cbs = {
				.rpc = clear_evpn_dup_addr_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-evpn-macs",
			.cbs = {
				.rpc = get_evpn_macs_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-evpn-arp-cache",
			.cbs = {
				.rpc = get_evpn_arp_cache_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-pbr-ipset",
			.cbs = {
				.rpc = get_pbr_ipset_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-pbr-iptable",
			.cbs = {
				.rpc = get_pbr_iptable_rpc,
			}
		},
		{
			.xpath = "/frr-zebra:get-debugs",
			.cbs = {
				.rpc = get_debugs_rpc,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list",
			.cbs = {
				.create = lib_interface_zebra_ip4_addr_list_create,
				.destroy = lib_interface_zebra_ip4_addr_list_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list/ip4-peer",
			.cbs = {
				.modify = lib_interface_zebra_ip4_addr_list_ip4_peer_modify,
				.destroy = lib_interface_zebra_ip4_addr_list_ip4_peer_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/ip4-addr-list/label",
			.cbs = {
				.modify = lib_interface_zebra_ip4_addr_list_label_modify,
				.destroy = lib_interface_zebra_ip4_addr_list_label_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/ip6-addr-list",
			.cbs = {
				.create = lib_interface_zebra_ip6_addr_list_create,
				.destroy = lib_interface_zebra_ip6_addr_list_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/ip6-addr-list/label",
			.cbs = {
				.modify = lib_interface_zebra_ip6_addr_list_label_modify,
				.destroy = lib_interface_zebra_ip6_addr_list_label_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/multicast",
			.cbs = {
				.modify = lib_interface_zebra_multicast_modify,
				.destroy = lib_interface_zebra_multicast_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/link-detect",
			.cbs = {
				.modify = lib_interface_zebra_link_detect_modify,
				.destroy = lib_interface_zebra_link_detect_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/shutdown",
			.cbs = {
				.modify = lib_interface_zebra_shutdown_modify,
				.destroy = lib_interface_zebra_shutdown_destroy,
			}
		},
		{
			.xpath = "/frr-interface:lib/interface/frr-zebra:zebra/bandwidth",
			.cbs = {
				.modify = lib_interface_zebra_bandwidth_modify,
				.destroy = lib_interface_zebra_bandwidth_destroy,
			}
		},
		{
			.xpath = NULL,
		},
	}
};
