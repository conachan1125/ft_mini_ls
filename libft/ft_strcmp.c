/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 21:06:36 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/04 21:18:14 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char *us1;
	unsigned char *us2;

	if (!s1 || !s2)
		return (INT_MIN);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	return (*us1 - *us2);
}
