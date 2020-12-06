/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:41:54 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/06 14:19:52 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strfsort(char **str, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		str_count;
	int		tmp;

	i = 0;
	str_count = ft_count_div(str);
	while (i < str_count - 1)
	{
		j = i + 1;
		while (j < str_count)
		{
			if ((tmp = (*cmp)(str[i], str[j])) == INT_MIN)
				return (EXIT_FAILURE);
			if (tmp > 0)
				ft_swap((void**)&(str[i]), (void**)&(str[j]));
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
