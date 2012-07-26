/**
 * xrdp: A Remote Desktop Protocol server.
 *
 * Copyright (C) Jay Sorg 2012
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
   window manager info
   http://www.freedesktop.org/wiki/Specifications/wm-spec
*/

#include <X11/Xlib.h>
#include "rail.h"
#include "xcommon.h"
#include "log.h"

int g_rail_up = 0;

/*****************************************************************************/
int APP_CC
rail_init(void)
{
  return 0;
}

/*****************************************************************************/
int APP_CC
rail_deinit(void)
{
  return 0;
}

/*****************************************************************************/
/* data in from client ( client -> xrdp -> chansrv ) */
int APP_CC
rail_data_in(struct stream* s, int chan_id, int chan_flags, int length,
             int total_length)
{
  return  0;
}

/*****************************************************************************/
/* returns 0, event handled, 1 unhandled */
int APP_CC
rail_xevent(void* xevent)
{
  return 1;
}
