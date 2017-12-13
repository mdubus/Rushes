/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnpbrk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 09:21:12 by luperez           #+#    #+#             */
/*   Updated: 2015/02/15 13:17:01 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		strnpbrk(const char *s1, const char *s2, size_t n)
{
	int				y;
	int				x;
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	if ((s1 == NULL && s2 == NULL) || n < 1)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (1);
	i = 0;
	y = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[y])
	{
		x = -1;
		while (s3[y] != s4[++x] && s3[y] && s4[i] && --n)
			i++;
		y++;
	}
	if (s3[i] == s4[i])
		return (0);
	return (i);
}
