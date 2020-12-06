/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:20:49 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/04 21:02:09 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_LS_H
# define FT_MINI_LS_H

# include <sys/types.h>
# include <dirent.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <time.h>
# include <stdbool.h>
# include <unistd.h>
# include <errno.h>
# include "libft/libft.h"

# define ARG_ERR "ft_mini_ls: Commandline arguments can't be used\n"
# define OPENDIR_ERR "ft_mini_ls: Fail to opendir\n"
# define MALLOC_ERR "ft_mini_ls: Fail to malloc\n"
# define STAT_ERR "ft_mini_ls: Fail to stat\n"

int		perror_message(char *error_message);
int		put_err_msg(char *error_message, size_t len);
int		sort_by_mtime(char *s1, char *s2);

#endif
