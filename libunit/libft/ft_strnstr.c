/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 21:33:09 by luperez           #+#    #+#             */
/*   Updated: 2014/11/09 14:04:03 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		f;
	int		g;
	int		n2;

	if (!s2)
		return ((char *)s1);
	n2 = (int)n + 2;
	i = -1;
	while (s1[++i] && --n2)
	{
		f = 0;
		g = i;
		while (s1[g] == s2[f] && s1[g] && s2[f] && ++g && ++f)
		{
			if (n2 - f < 1)
				return (NULL);
		}
		if (!s2[f])
			return ((char *)&s1[i]);
	}
	return (NULL);
}
