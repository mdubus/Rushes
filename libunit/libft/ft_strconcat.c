/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:18:10 by luperez           #+#    #+#             */
/*   Updated: 2014/11/22 14:10:02 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strconcat(char *s1, const char *s2)
{
	char	*s3;
	int		len;
	char	*save;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen((char *)s2);
	if (len < 1)
		return (NULL);
	if (!(s3 = ft_strnew(len)))
		return (NULL);
	save = s3;
	while (*s1 && s1)
		*s3++ = *s1++;
	while (*s2 && s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (save);
}
