// SPDX-License-Identifier: GPL-2.0-or-later
/* History log feature.
 * Copyright (C) 2025 Cisco Systems Inc.
 */

#include "zebra.h"
#include "frrhist.h"
#include "memory.h"

DEFINE_MTYPE_STATIC(LIB, FRRHIST, "Event History");

/*
 * Single instance of a history event
 */
struct frrhist_event {
	enum frrhist_event_id id;
	struct timeval tv;
	void *app_data;
};
