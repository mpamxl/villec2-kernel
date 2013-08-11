/*
 *   Copyright (c) International Business Machines  Corp., 2000,2002
 *
 *   This program is free software;  you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY;  without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 *   the GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program;  if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * uniupr.h - Unicode compressed case ranges
 *
*/

#ifndef UNIUPR_NOUPPER
signed char CifsUniUpperTable[512] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	-32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	-32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	-32, -32, -32, -32, -32, -32, -32, 0, -32, -32, -32, -32, -32, -32, -32, 121,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,	
	-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0,	
	0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0,	
	0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0,	
	0, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0,	
	-1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0,	
	0, 0, 0, 0, 0, -1, -2, 0, -1, -2, 0, -1, -2, 0, -1, 0,	
	-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -79, 0, -1, 
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, 0, -1, -2, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1,	
};

static signed char UniCaseRangeU03a0[47] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -38, -37, -37, -37,	
	0, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	-32, -32, -31, -32, -32, -32, -32, -32, -32, -32, -32, -32, -64,
	-63, -63,
};

static signed char UniCaseRangeU0430[48] = {
	-32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	-32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	0, -80, -80, -80, -80, -80, -80, -80, -80, -80, -80, -80, -80, 0, -80, -80,	
};

static signed char UniCaseRangeU0490[61] = {
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, 0, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1,
};

static signed char UniCaseRangeU1e00[509] = {
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -59, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1,	
	0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 8, 0, 8, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	74, 74, 86, 86, 86, 86, 100, 100, 0, 0, 112, 112, 126, 126, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 8, 8, 8, 8, 8, 8, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	8, 8, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

static signed char UniCaseRangeUff40[27] = {
	0, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,	
	-32, -32, -32, -32, -32, -32, -32, -32, -32, -32, -32,
};

const struct UniCaseRange CifsUniUpperRange[] = {
	{0x03a0, 0x03ce, UniCaseRangeU03a0},
	{0x0430, 0x045f, UniCaseRangeU0430},
	{0x0490, 0x04cc, UniCaseRangeU0490},
	{0x1e00, 0x1ffc, UniCaseRangeU1e00},
	{0xff40, 0xff5a, UniCaseRangeUff40},
	{0}
};
#endif

#ifndef UNIUPR_NOLOWER
signed char CifsUniLowerTable[512] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
	32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
	32, 32, 32, 32, 32, 32, 32, 0, 32, 32, 32, 32, 32, 32, 32, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1,	
	0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, -121, 1, 0, 1, 0, 1, 0, 0,	
	0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 79, 0,	
	0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,	
	1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1,	
	0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0,	
	0, 0, 0, 0, 2, 1, 0, 2, 1, 0, 2, 1, 0, 1, 0, 1,	
	0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	0, 2, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
};

static signed char UniCaseRangeL0380[44] = {
	0, 0, 0, 0, 0, 0, 38, 0, 37, 37, 37, 0, 64, 0, 63, 63,	
	0, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
	32, 32, 0, 32, 32, 32, 32, 32, 32, 32, 32, 32,
};

static signed char UniCaseRangeL0400[48] = {
	0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 0, 80, 80,	
	32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
	32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
};

static signed char UniCaseRangeL0490[60] = {
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1,
};

static signed char UniCaseRangeL1e00[504] = {
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,	
	1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, -8, 0, -8, 0, -8, 0, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -8, -8, -8, -8, -8, -8,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -74, -74, -9, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -86, -86, -86, -86, -9, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -100, -100, 0, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0, -8, -8, -112, -112, -7, 0, 0, 0,	
	0, 0, 0, 0, 0, 0, 0, 0,
};

static signed char UniCaseRangeLff20[27] = {
	0, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,	
	32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
};

const struct UniCaseRange CifsUniLowerRange[] = {
	{0x0380, 0x03ab, UniCaseRangeL0380},
	{0x0400, 0x042f, UniCaseRangeL0400},
	{0x0490, 0x04cb, UniCaseRangeL0490},
	{0x1e00, 0x1ff7, UniCaseRangeL1e00},
	{0xff20, 0xff3a, UniCaseRangeLff20},
	{0}
};
#endif
