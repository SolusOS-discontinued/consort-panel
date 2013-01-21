/*
 * panel-glib.h: various small extensions to glib
 *
 * Copyright (C) 2008 Novell, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Authors:
 *	Vincent Untz <vuntz@gnome.org>
 */

#ifndef PANEL_GLIB_H
#define PANEL_GLIB_H

#include <glib.h>

G_BEGIN_DECLS

#define PANEL_GLIB_STR_EMPTY(x) ((x) == NULL || (x)[0] == '\0')

char       *panel_g_lookup_in_data_dirs         (const char *basename);
char       *panel_g_lookup_in_applications_dirs (const char *basename);

const char *panel_g_utf8_strstrcase             (const char *haystack,
						 const char *needle);

G_END_DECLS

#endif /* PANEL_GLIB_H */
