/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup_loop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 02:01:55 by luperez           #+#    #+#             */
/*   Updated: 2015/03/14 12:57:50 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void				*ft_strcdup_loop(void **dst, const void *src, int c)
{
	unsigned int	i;

	if (!src || !(i = count((char *)src, c))
		|| !(*dst = ft_strnew(sizeof(char) * i)))
		return (NULL);
	i = -1;
	while (((unsigned char *)src)[++i])
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return ((void *)&((char *)src)[i + 1]);
		((unsigned char *)*dst)[i] = ((unsigned char *)src)[i];
	}
	return (NULL);
}
