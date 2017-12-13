/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_errno.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 04:42:13 by luperez           #+#    #+#             */
/*   Updated: 2014/12/21 23:55:41 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print_errno_part2(void)
{
	if (errno == ENOTDIR)
		ft_putstrerrno("ENOTDIR:\n\
A component of the path prefix is not a directory.");
	if (errno == ENXIO)
		ft_putstrerrno("ENXIO:\n\
The named file is a character-special or block-special file and \
the device associated with this special file does not exist.");
	if (errno == EOPNOTSUPP)
		ft_putstrerrno("EOPNOTSUPP:\n\
O_SHLOCK or O_EXLOCK is specified, but the underlying filesystem \
does not support locking.");
	if (errno == EOVERFLOW)
		ft_putstrerrno("EOVERFLOW:\n\
The named file is a regular file and its size does not fit in an \
bject of type off_t.");
	if (errno == EROFS)
		ft_putstrerrno("EROFS:\n\
The named file resides on a read-only file system, and the file \
is tobe modified.");
	if (errno == ETXTBSY)
		ft_putstrerrno("ETXTBSY:\n\
The file is a pure procedure (shared text) file that is being \
executed and the open() call requests write access.");
}

static void		ft_print_errno_part1(void)
{
	if (errno == EINVAL)
		ft_putstrerrno("EINVAL:\nThe value of oflag is not valid.");
	if (errno == EIO)
		ft_putstrerrno("EIO:\n\
I/O error occurs on making the directory entry or alloc inode");
	if (errno == EISDIR)
		ft_putstrerrno("EISDIR: The named file is a directory.");
	if (errno == ELOOP)
		ft_putstrerrno("ELOOP:\n\
Many symbolic links are encountered in translating the pathname.");
	if (errno == EMFILE)
		ft_putstrerrno("EMFILE:\n\
The process has already reached its limit for open fd.");
	if (errno == ENAMETOOLONG)
		ft_putstrerrno("ENAMETOOLONG:\n\
A component of a pathname exceeds {NAME_MAX} characters \
or an entire path name exceeded {PATH_MAX} characters.");
	if (errno == ENFILE)
		ft_putstrerrno("ENFILE:\nThe system file table is full.");
	if (errno == ENOSPC)
		ft_putstrerrno("ENOSPC:\n\
O_CREAT is specified, the file does not exist");
	ft_print_errno_part2();
}

void			ft_print_errno(void)
{
	ft_putstrerrno("\nIncorrect errno value detected !\n\n");
	if (errno == ENOENT)
		ft_putstrerrno("ENOENT:\n\
A component of the path name that must exist does not exist.");
	if (errno == EACCES)
		ft_putstrerrno("EACCES:\n\
Search permission is denied for a component of the path prefix.");
	if (errno == EAGAIN)
		ft_putstrerrno("EAGAIN:\n\
Path specifies the slave side of a locked pseudoterminal device");
	if (errno == EDQUOT)
		ft_putstrerrno("EDQUOT:\nO_CREAT is specified, the file does not exist\
, and the user's quota of inodes on the file system on which the file \
is being created has been exhausted.");
	if (errno == EEXIST)
		ft_putstrerrno("EEXIST:\n\
O_CREAT and O_EXCL are specified and the file exists.");
	if (errno == EFAULT)
		ft_putstrerrno("EFAULT:\n\
Path points outside the process's allocated address space.");
	if (errno == EINTR)
		ft_putstrerrno("EINTR:\n\
The open() operation is interrupted by a signal.");
	ft_print_errno_part1();
}
