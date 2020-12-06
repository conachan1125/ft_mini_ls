/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:09:03 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/06 15:16:16 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		count_files(DIR *dir)
{
	struct dirent	*direntp;
	int				count;

	count = 0;
	while ((direntp = readdir(dir)) != NULL)
	{
		if (ft_memcmp(direntp->d_name, ".", 1) == 0)
			continue ;
		count++;
	}
	return (count);
}

int		cp_file_name(char **files)
{
	DIR				*dir;
	struct dirent	*direntp;
	int				i;

	if ((dir = opendir(".")) == NULL)
		return (perror_message(OPENDIR_ERR));
	i = 0;
	while ((direntp = readdir(dir)) != NULL)
	{
		if (ft_memcmp(direntp->d_name, ".", 1) == 0)
			continue ;
		files[i] = ft_strdup(direntp->d_name);
		i++;
	}
	files[i] = NULL;
	closedir(dir);
	return (0);
}

int		do_ls(void)
{
	DIR		*dir;
	char	**files;
	int		alloc_size;

	if ((dir = opendir(".")) == NULL)
		return (perror_message(OPENDIR_ERR));
	alloc_size = count_files(dir) + 1;
	closedir(dir);
	if (!(files = malloc(sizeof(char *) * (alloc_size))))
		return (perror_message(MALLOC_ERR));
	if (cp_file_name(files) == 1)
	{
		free(files);
		return (1);
	}
	ft_strfsort(files, &cmp_by_mtime);
	ft_putdiv(files);
	ft_freediv((void ***)&files);
	return (0);
}

int		main(int ac, char **av)
{

	(void)av;
	if (ac == 1)
		return (do_ls());
	else
		return (put_err_msg(ARG_ERR, ft_strlen(ARG_ERR)));
}
