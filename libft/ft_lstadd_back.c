/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 01:51:19 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/14 22:54:16 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *end;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		end = ft_lstlast(*lst);
		end->next = new;
	}
}
