/*
 * Neighbor gleaning throttle API.
 *
 * Copyright (C) 2021 by Nvidia, Inc.
 * Mark Stapp <mstapp@nvidia.com>
 *
 * This file is part of FRRouting.
 *
 * FRR is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * FRR is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _ZEBRA_NEIGH_THROTTLE_H
#define _ZEBRA_NEIGH_THROTTLE_H

#include "lib/zebra.h"
#include "lib/ipaddr.h"

/*
 * This feature tries to throttle the use of unresolved neighbor entries. These
 * can be generated by, for instance, asics that need to have a local
 * neighbor resolved. Certain DOS attacks, as well as some normal patterns,
 * can lead to an excess of unresolved neighbors. If enabled, this feature
 * installs a blackhole route for the destination IP address of each new
 * unresolved neighbor. Once the neighbor is resolved, or after a configurable
 * timeout, the blackhole route is deleted.
 */

#define ZEBRA_NEIGH_THROTTLE_DEFAULT_MAX      1000
#define ZEBRA_NEIGH_THROTTLE_DEFAULT_TIMEOUT  300 /* Seconds */
#define ZEBRA_NEIGH_THROTTLE_MAX_TIMEOUT      1800 /* Seconds */
#define ZEBRA_NEIGH_THROTTLE_MIN              0
#define ZEBRA_NEIGH_THROTTLE_MAX              0xffff


/* Init/startup function */
void zebra_neigh_throttle_init(void);

/* Shutdown/cleanup function */
void zebra_neigh_throttle_fini(void);

/* Enable or disable the feature */
void zebra_neigh_throttle_enable(bool enable);

/* Set limit on number of blackhole entries permitted. */
void zebra_neigh_throttle_set_max(uint32_t limit);

/* Set timeout for blackhole entries (in seconds). */
void zebra_neigh_throttle_set_timeout(int timeout);

/* Add a single neighbor address entry. */
int zebra_neigh_throttle_add(vrf_id_t vrfid, const struct ipaddr *addr);

/* Delete a single neighbor entry */
int zebra_neigh_throttle_delete(vrf_id_t vrfid, const struct ipaddr *addr);

/* Show output */
int zebra_neigh_throttle_show(struct vty *vty, bool detail);

#endif	/* _ZEBRA_NEIGH_THROTTLE_H */
