/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmomose <tmomose@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 00:10:59 by tmomose           #+#    #+#             */
/*   Updated: 2020/11/15 10:04:06 by tmomose          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_free_tab(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		ret[i] = NULL;
		i++;
	}
	free(ret);
	ret = NULL;
	return (NULL);
}

static int			ft_get_count_ele(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static int			ft_strnum(const char *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static char			**ft_split_tab(char **ret, const char *s, char c, int count)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		if (!(ret[j] = (char *)malloc(ft_strnum(s, c, i) + 1)))
			return (ft_free_tab(ret));
		k = 0;
		while (s[i] && s[i] != c)
			ret[j][k++] = s[i++];
		ret[j][k] = '\0';
		j++;
	}
	ret[j] = NULL;
	return (ret);
}

char				**ft_split(char const *s, char c)
{
	int		count;
	char	**ret;

	if (!s)
		return (NULL);
	count = ft_get_count_ele(s, c);
	if (!(ret = (char **)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	return (ft_split_tab(ret, s, c, count));
}
