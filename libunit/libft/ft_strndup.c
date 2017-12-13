/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:24:58 by luperez           #+#    #+#             */
/*   Updated: 2015/02/15 13:15:18 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;
	unsigned char	*s2;

	if (n < 1 || !s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	n = (len > n) ? n : len;
	if (!(s2 = (unsigned char *)ft_strnew(n * sizeof(unsigned char))))
		return (NULL);
	i = -1;
	while (((unsigned char *)s1)[++i] && n--)
		s2[i] = (unsigned char)s1[i];
	return ((char *)s2);
}
