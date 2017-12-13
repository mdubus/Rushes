/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:55:39 by luperez           #+#    #+#             */
/*   Updated: 2014/11/15 16:22:27 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*save;
	int		len;

	len = ft_strlen((char *)src);
	save = dst;
	if ((src < dst && src + len >= dst) || (src > dst && src < dst + len)\
			|| src == dst)
		return (NULL);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (save);
}
