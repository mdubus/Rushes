/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtriconcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:18:10 by luperez           #+#    #+#             */
/*   Updated: 2014/11/22 14:10:02 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtriconcat(const char *s1, const char *s2, const char *s3)
{
	char	*dest;
	int		len;
	char	*save;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen((char *)s2) + ft_strlen((char *)s3);
	if (len < 1)
		return (NULL);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	save = dest;
	while (*s1 && s1)
		*dest++ = *s1++;
	while (*s2 && s2)
		*dest++ = *s2++;
	while (*s3 && s3)
		*dest++ = *s3++;
	*dest = '\0';
	return (save);
}
