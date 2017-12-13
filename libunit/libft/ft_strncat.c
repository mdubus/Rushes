/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:18:10 by luperez           #+#    #+#             */
/*   Updated: 2014/11/07 01:23:08 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		n2;
	int		len;
	int		len2;
	char	*save;

	n2 = (int)n;
	len2 = ft_strlen((char *)s2);
	len2 = (len2 > n2) ? n2 : len2;
	len = ft_strlen(s1) + len2;
	if ((s1 < s2 && s1 + len >= s2) || (s1 > s2 && s1 < s2 + len2) || s1 == s2)
		return (NULL);
	save = s1;
	s1 += ft_strlen(s1);
	while (*s2 && n--)
		*s1++ = *s2++;
	*s1 = '\0';
	return (save);
}
