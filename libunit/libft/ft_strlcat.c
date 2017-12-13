/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 01:47:37 by luperez           #+#    #+#             */
/*   Updated: 2014/11/14 10:40:01 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len_dst;
	int		len_src;
	int		n;
	int		max;

	n = (int)size;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (n < 0)
		return (0);
	if (len_dst + 1 >= n)
		return (len_src + n);
	max = (len_src > n) ? n : len_src;
	if (dst == src || (dst < src && dst + len_dst + n >= src) ||\
		(dst > src && dst < src + max))
		return (0);
	max = n - len_dst;
	dst += len_dst;
	while (*src && max-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len_dst + len_src);
}
