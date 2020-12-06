/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:30:22 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/14 22:52:44 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	ret;
	int				sign;
	int				i;

	i = 0;
	sign = 1;
	ret = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((ret > L_BORDER || (ret == L_BORDER && (str[i] - '0') > 7))
				&& sign == 1)
			return (-1);
		else if ((ret > L_BORDER || (ret == L_BORDER && (str[i] - '0') > 8))
				&& sign == -1)
			return (0);
		ret = ret * 10 + (str[i++] - '0');
	}
	return (ret * sign);
}
