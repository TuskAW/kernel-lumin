/*
 * Copyright (c) 2017, Magic Leap, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/* Make the compatibility versions of syscalls to be used. */
#define __COMPAT_SYSCALL_NR

/*
 * Change the name of the syscall_inspect_table,
 * to create new "compat" versions.
 */
#define syscall_inspect_table	syscall_inspect_table_compat

#include "syscall_inspect.c"


int sbox_inspect_syscall_compat(int sys_nr, unsigned long args[])
{
	int x_nr = __X_SYSCALL_NR_TO_SERIAL(sys_nr);
	return syscall_inspect_table_compat[x_nr](args);
}
