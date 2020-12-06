/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:01:28 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/29 00:37:50 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	char	*ptr;
	int		i;

	ptr = (char *)s1;
	ret = (char *)malloc(ft_strlen(ptr) + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (ptr[i])
	{
		ret[i] = ptr[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
