/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 01:46:15 by luperez           #+#    #+#             */
/*   Updated: 2015/01/31 01:49:34 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strccpy(void *dst, const void *src, int c)
{
	unsigned int	i;

	i = -1;
	if (!dst || !src)
		return (NULL);
	while (((unsigned char *)src)[i])
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (NULL);
}
