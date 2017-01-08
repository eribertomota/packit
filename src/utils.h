/*
 * Packit -- network injection and capture tool
 *
 * Original author: Darren Bounds <dbounds@intrusense.com>
 *
 * Copyright 2002 Darren Bounds <dbounds@intrusense.com>
 * Copyright 2016 Robert Krause <ruport@f00l.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA.
 *
 * packit official page at https://github.com/eribertomota/packit
 */

#ifndef __UTILS_H
#define __UTILS_H

#include "globals.h"
#include "inject_defs.h"
#include "capture_defs.h"
#include "pcap.h"

void print_separator(int, int, const char *, ...);
char *retrieve_rand_ipv4_addr(char *);
char *retrieve_rand_ethernet_addr(char *);
char *retrieve_arp_hw_type(u_int16_t);
char *retrieve_arp_type(u_int16_t);
char *retrieve_icmp_type(u_int16_t);
char *retrieve_icmp_code(u_int16_t, u_int16_t);
char *generate_padding(u_int16_t, u_int16_t);
u_int32_t format_hex_payload(char *);
u_int16_t parse_port_range(char *);
u_int16_t retrieve_datalink_hdr_len(u_int32_t);
u_int32_t retrieve_rand_int(u_int32_t);
u_int32_t format_ethernet_addr(char *, char[]);
int retrieve_tcp_flags();

#endif /* __UTILS_H */

