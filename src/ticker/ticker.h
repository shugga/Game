/*
 * ticker.h - general definitions for the ticker
 * Copyright (c) 2003  OGP Team
 * Copyright (c) 2011-2013 Georg Pitterle <georg.pitterle@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef _TICKER_H_
#define _TICKER_H_

#define DEBUG_TICKER (1 << 0)
#define DEBUG_EVENTS (1 << 1)
#define DEBUG_BATTLE (1 << 2)
#define DEBUG_UGA_TIME (1 << 3)
#define DEBUG_TAKEOVER (1 << 4)
#define DEBUG_FAME (1 << 5)
#define DEBUG_SQL (1 << 6)
#define DEBUG_ARTEFACT (1 << 7)
#define DEBUG_EVENTS_DELETE (1 << 8)
#define DEBUG_HERO (1 << 9)

#define DB_TABLE_ARTEFACT "Artefact"
#define DB_TABLE_ARTEFACT_CLASS "Artefact_class"
#define DB_TABLE_CAVE "Cave"
#define DB_TABLE_CAVE_TAKEOVER "Cave_takeover"
#define DB_TABLE_PLAYER  "Player"
#define DB_TABLE_RELATION "Relation"
#define DB_TABLE_HERO "Hero"
#define DB_TABLE_TRIBE "Tribe"
#define DB_TABLE_PLAYER "Player"

#define ID_SCIENCE_UGA 22
#define ID_SCIENCE_AGGA 23
#define ID_SCIENCE_ENZIO 24

#define TAKEOVER_MULTIPLIER_BUILDING 16

#define WONDER_TIME_BASE_FACTOR 60
#define WEATHER_TIME_BASE_FACTOR 60

/* artefact constants */
#define ARTEFACT_LOST_CHANCE  0.2
#define ARTEFACT_LOST_RANGE  2

#endif /* _TICKER_H_ */
