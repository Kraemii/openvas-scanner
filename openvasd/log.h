/* OpenVAS
 * Copyright (C) 1998 Renaud Deraison
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef _NESSUSD_LOG_H
#define _NESSUSD_LOG_H

void log_init(const char *);
void log_close(void);
#ifdef __GNUC__
void log_write(const char *, ...) __attribute__ ((format (printf, 1, 2)));
#else
void log_write(const char *, ...);
#endif


#endif
