/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:56:07 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/06 15:15:55 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		put_err_msg(char *error_message, size_t len)
{
	write(2, error_message, len);
	return (1);
}

int		perror_message(char *error_message)
{
	perror(error_message);
	return (1);
}

int		cmp_by_mtime(char *s1, char *s2)
{
	struct stat		buf1;
	struct stat		buf2;

	if (lstat(s1, &buf1) != 0)
		return (INT_MIN);
	if (lstat(s2, &buf2) != 0)
		return (INT_MIN);
	if (buf1.st_mtimespec.tv_sec != buf2.st_mtimespec.tv_sec)
		return (buf1.st_mtimespec.tv_sec - buf2.st_mtimespec.tv_sec);
	else if (buf1.st_mtimespec.tv_nsec != buf2.st_mtimespec.tv_nsec)
		return (buf1.st_mtimespec.tv_nsec - buf2.st_mtimespec.tv_nsec);
	else
		return (-ft_strcmp(s1, s2));
}
