/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:36:20 by luperez           #+#    #+#             */
/*   Updated: 2014/11/06 23:06:31 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 < dst2)
	{
		dst2 += n;
		src2 += n;
		while (n--)
			*--dst2 = *--src2;
	}
	else
		while (n--)
			*dst2++ = *src2++;
	return (dst);
}
