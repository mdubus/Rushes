/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 02:01:55 by luperez           #+#    #+#             */
/*   Updated: 2015/01/31 02:27:46 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (*str && *str != c)
		i++;
	return (i);
}

void				*ft_strcdup(const void *src, int c)
{
	char			*dst;
	unsigned int	i;

	i = -1;
	if (!src)
		return (NULL);
	if (!(dst = ft_strnew(sizeof(char) * count((char *)src, c))))
		return (NULL);
	while (((unsigned char *)src)[i]
			&& ((unsigned char *)src)[i] != (unsigned char)c)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
