/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:51:33 by luperez           #+#    #+#             */
/*   Updated: 2014/11/05 20:10:32 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*s2;
	int				n2;

	n2 = (int)n;
	if (n < 1 || !s)
		return (NULL);
	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (--n2 && *s2 != c2)
		s2++;
	if (*s2 == c2)
		return (s2);
	return (NULL);
}
