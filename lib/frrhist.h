// SPDX-License-Identifier: GPL-2.0-or-later
/* History log feature header.
 * Copyright (C) 2025 Cisco Systems Inc.
 */

#ifndef _FRR_HIST_H
#define _FRR_HIST_H

#include "zebra.h"
#include "typesafe.h"

/*
 * General support for event-history features. Daemons can maintain
 * a rolling series of events associated with a specific object: a BGP
 * peer, an interface, e.g.
 * For an event, the lib maintains a container with a format string,
 * some metadata about its arguments, and a list of in-memory events.
 * The daemon must maintain its own object that holds the event data,
 * and associate the lib's container with each object.
 */

#ifdef __cplusplus
extern "C" {
#endif

/* Global event identifiers */
enum frrhist_event_id {
	FRRHIST_ID_NONE = 0,

	FRRHIST_ID_BGP_PEER = 1,

	/* End sentinel */
	FRRHIST_ID_LAST
};

/*
 * History event type, metadata for one type id from the catalog of types.
 */
struct frrhist_event_type {
	enum frrhist_event_id id;
	const char *format_str;

	int max_count; /* Max number to keep per key */

	/* TODO -- application callbacks for message-formatting, db key? */
	void (*format_cb)(const char *format_str, char *buf, size_t buflen,
			  const void *app_data);

	size_t (*key_cb)(uint8_t *buf, size_t buflen, const void *app_data);
};

/* Forward declaration */
struct frrhist_event;

PREDECL_LIST(evhist);

/*
 * Startup, shutdown apis
 */
void frrhist_init(void);
void frrhist_fini(void);

/*
 *
 */
int frrhist_event_type_init(const struct frrhist_event_type *event);

/*
 *
 */
const struct frrhist_event_type *
frrhist_event_type_lookup(enum frrhist_event_id id);

/*
 *
 */
const struct frrhist_event_type *
frrhist_event_add(enum frrhist_event_id id, void *app_data);

#ifdef __cplusplus
}
#endif

#endif	/* FRR_HIST_H */
