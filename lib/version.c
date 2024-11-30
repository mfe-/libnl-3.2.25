#include <sys/types.h>
#include <linux/types.h>
typedef __u32 u32;
typedef __u16 u16;
typedef __u8 u8;
typedef __u64 u64;
typedef __u16 __sum16;


/*
 * lib/version.c	Run-time version information
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2003-2012 Thomas Graf <tgraf@suug.ch>
 */

/**
 * @ingroup core
 * @defgroup utils Utilities
 *
 * Run-time version information
 *
 * @{
 */


/**
 * @name Run-time version information
 * @{
 */

#include <netlink/version.h>

const int      nl_ver_num = LIBNL_VER_NUM;
const int      nl_ver_maj = LIBNL_VER_MAJ;
const int      nl_ver_min = LIBNL_VER_MIN;
const int      nl_ver_mic = LIBNL_VER_MIC;

/** @} */

/** @} */
