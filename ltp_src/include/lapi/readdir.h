// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright (c) 2014 Fujitsu Ltd.
 * Author: Zeng Linggang <zenglg.jy@cn.fujitsu.com>
 */

#ifndef LAPI_READDIR_H__
#define LAPI_READDIR_H__

#include <limits.h>

struct old_linux_dirent {
	long  d_ino;			/* inode number */
	off_t d_off;			/* offset to this old_linux_dirent */
	unsigned short d_reclen;	/* length of this d_name */
	char  d_name[NAME_MAX+1];	/* filename (null-terminated) */
};

#endif /* LAPI_READDIR_H__ */
