/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 21:33:09 by luperez           #+#    #+#             */
/*   Updated: 2014/11/15 16:32:35 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		f;
	int		g;

	if (!s2 || !s2[0])
		return ((char *)s1);
	i = -1;
	while (s1[++i])
	{
		f = 0;
		g = i;
		while (s1[g] == s2[f] && s1[g] && s2[f] && ++g && ++f)
			;
		if (!s2[f])
			return ((char *)&s1[i]);
	}
	return (NULL);
}
