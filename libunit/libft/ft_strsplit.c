/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 22:12:00 by luperez           #+#    #+#             */
/*   Updated: 2014/11/19 11:03:48 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*cleaner(char const *s, char c)
{
	int		i1;
	int		i2;
	char	*clone;

	i1 = -1;
	i2 = 0;
	clone = ft_strdup((char *)s);
	while (clone[++i1 + i2])
	{
		if (clone[i1 + i2] == c && clone[i1 + 1 + i2] == c && ++i2)
			i1--;
		clone[i1] = clone[i1 + i2];
	}
	if (clone[i1])
		clone[i1] = '\0';
	return (clone);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	*clone;
	char	**tab;
	int		len;

	if (!s)
		return (NULL);
	clone = cleaner(s, c);
	if (!(len = ft_count_c_occur(clone, c) + 1)
		|| !(tab = (char **)malloc(sizeof(char *) * len)))
		return (NULL);
	ft_bzero(tab, len);
	i = -1;
	while (clone && *clone)
		clone = ft_strcdup_loop((void **)&tab[++i], clone, c);
	return (tab);
}
