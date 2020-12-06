/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freediv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:34:15 by tmomose           #+#    #+#             */
/*   Updated: 2020/12/04 20:37:10 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freediv(void ***div)
{
	int		i;

	i = 0;
	while ((*div)[i])
	{
		free((*div)[i]);
		(*div)[i] = NULL;
		i++;
	}
	free(*div);
	*div = NULL;
	return (NULL);
}
