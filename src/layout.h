/******************************************************************************
    ezlog:  a tiny any flexible log system written in C
    Copyright (C) 2012-2013 Wang Bin <wbsecg1@gmail.com>

*   This file is part of ezlog

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
******************************************************************************/


#ifndef LAYOUT_H
#define LAYOUT_H

#include "ezlog_global.h"

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

/*!
  \enum Layout
 */
enum Layout {
	DEFAULT_LAYOUT = 0
};
//typdef char* layout;
static const char* const layout_format[] = {
	"%YY%-%MM%-%DD% %hh%:%mm%:%ss% %level% 'tid:%tid% pid:%pid%'[%file%] %func% @%line%: %msg"
};


/*!
  \fn void ezlog_init_layout(const char* format)
  Setup the log message format.
*/

EZLOG_EXPORT void ezlog_set_global_layout(const char* format);
/*deprecate, use ezlog_set_global_layout() instead*/
EZLOG_EXPORT void ezlog_init_layout(const char* format);
//char* ezlog_layout_msg(const char* msg_extra);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // LAYOUT_H
