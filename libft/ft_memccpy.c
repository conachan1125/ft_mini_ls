/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:42:04 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/15 15:30:15 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	i = 0;
	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		if (ptrdst[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
