/*
 * prpltwtr 
 *
 * prpltwtr is the legal property of its developers, whose names are too numerous
 * to list here.  Please refer to the COPYRIGHT file distributed with this
 * source distribution.
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 */

#ifndef _PRPLTWTR_H_
#define _PRPLTWTR_H_
#include "defaults.h"

#include <errno.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <glib.h>
#include <errno.h>

#include <account.h>
#include <accountopt.h>
#include <blist.h>
#include <cmds.h>
#include <conversation.h>
#include <connection.h>
#include <core.h>
#include <debug.h>
#include <notify.h>
#include <privacy.h>
#include <prpl.h>
#include <roomlist.h>
#include <status.h>
#include <util.h>
#include <version.h>
#include <cipher.h>
#include <sslconn.h>
#include <request.h>

#include "prpltwtr_auth.h"
#include "prpltwtr_xml.h"
#include "prpltwtr_prefs.h"
#include "prpltwtr_request.h"
#include "prpltwtr_search.h"
#include "prpltwtr_api.h"
#include "prpltwtr_util.h"
#include "prpltwtr_endpoint_im.h"
#include "prpltwtr_endpoint_dm.h"
#include "prpltwtr_endpoint_reply.h"
#include "prpltwtr_endpoint_search.h"
#include "prpltwtr_endpoint_timeline.h"
#include "prpltwtr_buddy.h"
#include "prpltwtr_conn.h"

#include "prpltwtr_plugin.h"

void            prpltwtr_login(PurpleAccount * account);
void            prpltwtr_recoverable_disconnect(PurpleAccount * account, const char *message);
void            prpltwtr_disconnect(PurpleAccount * account, const char *message);
void            prpltwtr_verify_connection(PurpleAccount * account);
gboolean        prpltwtr_offline_message(const PurpleBuddy * buddy);

/// Configures the requestor with the specific paths and formats used by this account.
/// This will pre-calculate all the known paths used by the plugin (excluding those with
/// additional parameters). In addition, it will set up the pointers to parse the data
/// from the social network.
///
/// This will pick the appropriate network based on the account in the requestor.
void            prpltwtr_plugin_setup(TwitterRequestor * requestor);

#endif
