/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 01:07:35 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/15 14:28:41 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nblen(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char			*ret;
	unsigned int	len;
	unsigned int	nb;
	unsigned int	i;

	nb = (n < 0 ? n * (-1) : n);
	len = ft_nblen(nb);
	i = 0;
	if (!(ret = (char *)malloc(len + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		ret[i] = '-';
		len++;
	}
	i = len - 1;
	while (nb >= 10)
	{
		ret[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	ret[i] = nb % 10 + '0';
	ret[len] = '\0';
	return (ret);
}
