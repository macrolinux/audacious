/*  BMP - Cross-platform multimedia player
 *  Copyright (C) 2003-2004  BMP development team.
 *
 *  Based on XMMS:
 *  Copyright (C) 1998-2003  XMMS development team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _WIDGETCORE_H_
#error Please do not include me directly! Use widgetcore.h instead!
#endif

#ifndef SBUTTON_H
#define SBUTTON_H

#include <glib.h>
#include <gdk/gdk.h>

#include "widget.h"

#define SBUTTON(x)  ((SButton *)(x))
struct _SButton {
    Widget sb_widget;
    gint sb_pressed, sb_inside;
    void (*sb_push_cb) (void);
};

typedef struct _SButton SButton;

SButton *create_sbutton(GList ** wlist, GdkPixmap * parent, GdkGC * gc,
                        gint x, gint y, gint w, gint h, void (*cb) (void));
void free_sbutton(SButton * b);

#endif
