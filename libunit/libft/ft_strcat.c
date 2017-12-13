/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:18:10 by luperez           #+#    #+#             */
/*   Updated: 2014/11/07 01:29:21 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		len;
	char	*save;

	len = ft_strlen(s1) + ft_strlen((char *)s2);
	if ((s1 < s2 && s1 + len >= s2) || (s1 > s2 && s1 < s2 + len) || s1 == s2)
		return (NULL);
	save = s1;
	s1 += ft_strlen(s1);
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (save);
}
