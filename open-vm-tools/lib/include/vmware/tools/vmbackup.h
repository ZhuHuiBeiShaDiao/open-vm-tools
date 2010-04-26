/*********************************************************
 * Copyright (C) 2010 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

#ifndef _VMBACKUP_H_
#define _VMBACKUP_H_

/**
 * @file vmbackup.h
 *
 * Public interface of the "vmbackup" plugin. Defines events generated by the
 * plugin that other code can monitor.
 */

/**
 * Signal sent when access to disk resources has been affected in some manner
 * (e.g., disks have been frozen in preparation for a snapshot). Plugins that
 * access the disk should listen for this signal and avoid performing disk
 * operations while I/O is frozen.
 *
 * @param[in]  src      The source object.
 * @param[in]  ctx      ToolsAppCtx *: The application context.
 * @param[in]  freeze   TRUE if I/O is being frozen, FALSE otherwise.
 * @param[in]  data     Client data.
 */
#define TOOLS_CORE_SIG_IO_FREEZE    "tcs_io_freeze"

#endif /* _VMBACKUP_H_ */
