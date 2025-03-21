// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Recursive Nexthop Iterator test.
 * This tests the ALL_NEXTHOPS macro.
 *
 * Copyright (C) 2012 by Open Source Routing.
 * Copyright (C) 2012 by Internet Systems Consortium, Inc. ("ISC")
 *
 * This file is part of Quagga
 */

#include <zebra.h>
#include "zebra/rib.h"
#include "prng.h"

struct event_loop *master;
static int verbose;

static void str_append(char **buf, const char *repr)
{
	if (*buf) {
		size_t new_size = strlen(*buf) + strlen(repr) + 1;
		*buf = realloc(*buf, new_size);
		assert(*buf);
		(void)strlcat(*buf, repr, new_size);
	} else {
		*buf = strdup(repr);
		assert(*buf);
	}
}

PRINTFRR(2, 3)
static void str_appendf(char **buf, const char *format, ...)
{
	va_list ap;
	int rv;
	char *pbuf;

	va_start(ap, format);
	rv = vasprintf(&pbuf, format, ap);
	va_end(ap);
	assert(rv >= 0);

	str_append(buf, pbuf);
	free(pbuf);
}

/* This structure contains a nexthop chain
 * and its expected representation */
struct nexthop_chain {
	/* Head of the chain */
	struct nexthop_group head;
	/* Last nexthop in top chain */
	struct nexthop *current_top;
	/* Last nexthop in current recursive chain */
	struct nexthop *current_recursive;
	/* Expected string representation. */
	char *repr;
};

static struct nexthop_chain *nexthop_chain_new(void)
{
	struct nexthop_chain *rv;

	rv = calloc(1, sizeof(*rv));
	assert(rv);
	return rv;
}

static void nexthop_chain_add_top(struct nexthop_chain *nc)
{
	struct nexthop *nh;

	nh = calloc(1, sizeof(*nh));
	assert(nh);

	if (nc->head.nexthop) {
		nc->current_top->next = nh;
		nh->prev = nc->current_top;
		nc->current_top = nh;
	} else {
		nc->head.nexthop = nc->current_top = nh;
	}
	nc->current_recursive = NULL;
	str_appendf(&nc->repr, "%p\n", nh);
}

static void add_string_representation(char **repr, struct nexthop *nh)
{
	struct nexthop *parent;

	/* add indentations first */
	parent = nh->rparent;
	while (parent) {
		str_appendf(repr, "  ");
		parent = parent->rparent;
	}
	str_appendf(repr, "%p\n", nh);
}

static void start_recursive_chain(struct nexthop_chain *nc, struct nexthop *nh)
{
	SET_FLAG(nc->current_top->flags, NEXTHOP_FLAG_RECURSIVE);
	nc->current_top->resolved = nh;
	nh->rparent = nc->current_top;
	nc->current_recursive = nh;
}
static void nexthop_chain_add_recursive(struct nexthop_chain *nc)
{
	struct nexthop *nh;

	nh = calloc(1, sizeof(*nh));
	assert(nh);

	assert(nc->current_top);
	if (nc->current_recursive) {
		nc->current_recursive->next = nh;
		nh->prev = nc->current_recursive;
		nh->rparent = nc->current_recursive->rparent;
		nc->current_recursive = nh;
	} else
		start_recursive_chain(nc, nh);

	add_string_representation(&nc->repr, nh);
}

static void nexthop_chain_add_recursive_level(struct nexthop_chain *nc)
{
	struct nexthop *nh;

	nh = calloc(1, sizeof(*nh));
	assert(nh);

	assert(nc->current_top);
	if (nc->current_recursive) {
		SET_FLAG(nc->current_recursive->flags, NEXTHOP_FLAG_RECURSIVE);
		nc->current_recursive->resolved = nh;
		nh->rparent = nc->current_recursive;
		nc->current_recursive = nh;
	} else
		start_recursive_chain(nc, nh);

	add_string_representation(&nc->repr, nh);
}

static void nexthop_clear_recursive(struct nexthop *tcur)
{
	if (!tcur)
		return;
	if (CHECK_FLAG(tcur->flags, NEXTHOP_FLAG_RECURSIVE))
		nexthop_clear_recursive(tcur->resolved);
	if (tcur->next)
		nexthop_clear_recursive(tcur->next);
	free(tcur);
}
static void nexthop_chain_clear(struct nexthop_chain *nc)
{
	nexthop_clear_recursive(nc->head.nexthop);
	nc->head.nexthop = nc->current_top = nc->current_recursive = NULL;
	free(nc->repr);
	nc->repr = NULL;
}

static void nexthop_chain_free(struct nexthop_chain *nc)
{
	if (!nc)
		return;
	nexthop_chain_clear(nc);
	free(nc);
}

/* This function builds a string representation of
 * the nexthop chain using the ALL_NEXTHOPS macro.
 * It verifies that the ALL_NEXTHOPS macro iterated
 * correctly over the nexthop chain by comparing the
 * generated representation with the expected representation.
 */
static void nexthop_chain_verify_iter(struct nexthop_chain *nc)
{
	struct nexthop *nh;
	char *repr = NULL;

	for (ALL_NEXTHOPS(nc->head, nh))
		add_string_representation(&repr, nh);

	if (repr && verbose)
		printf("===\n%s", repr);
	assert((!repr && !nc->repr)
	       || (repr && nc->repr && !strcmp(repr, nc->repr)));
	free(repr);
}

/* This test run builds a simple nexthop chain
 * with some recursive nexthops and verifies that
 * the iterator works correctly in each stage along
 * the way.
 */
static void test_run_first(void)
{
	struct nexthop_chain *nc;

	nc = nexthop_chain_new();
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive_level(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_recursive(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_add_top(nc);
	nexthop_chain_verify_iter(nc);

	nexthop_chain_free(nc);
}

/* This test run builds numerous random
 * nexthop chain configurations and verifies
 * that the iterator correctly progresses
 * through each. */
static void test_run_prng(void)
{
	struct nexthop_chain *nc;
	struct prng *prng;
	int i;

	nc = nexthop_chain_new();
	prng = prng_new(0);

	for (i = 0; i < 1000000; i++) {
		switch (prng_rand(prng) % 10) {
		case 0:
			nexthop_chain_clear(nc);
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			nexthop_chain_add_top(nc);
			break;
		case 6:
		case 7:
		case 8:
			if (nc->current_top)
				nexthop_chain_add_recursive(nc);
			break;
		case 9:
			if (nc->current_top)
				nexthop_chain_add_recursive_level(nc);
			break;
		}
		nexthop_chain_verify_iter(nc);
	}
	nexthop_chain_free(nc);
	prng_free(prng);
}

int main(int argc, char **argv)
{
	if (argc >= 2 && !strcmp("-v", argv[1]))
		verbose = 1;
	test_run_first();
	printf("Simple test passed.\n");
	test_run_prng();
	printf("PRNG test passed.\n");
}
