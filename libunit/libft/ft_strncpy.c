/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:55:39 by luperez           #+#    #+#             */
/*   Updated: 2014/11/15 21:45:03 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int		n2;
	int		len;
	int		n_max;
	char	*save;

	save = dst;
	n2 = (int)n;
	len = ft_strlen((char *)src);
	n_max = (n2 > len) ? len : n2;
	if ((dst < src && dst + n_max >= src) || (dst > src && dst < src + n_max)\
	|| dst == src)
		return (NULL);
	while (n2--)
		*dst++ = *src++;
	if (n2 > 0)
		*dst++ = '\0';
	return (save);
}
