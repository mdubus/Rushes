/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:24:58 by luperez           #+#    #+#             */
/*   Updated: 2014/12/21 23:56:04 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int				i;
	unsigned char	*s2;
	unsigned char	*start_s2;
	int				len;

	if (!s1)
		return (NULL);
	len = ft_strlen((char *)s1);
	if (len < 0 || !(s2 = (unsigned char *)ft_strnew(len)))
		return (ft_memalloc(1));
	ft_bzero(s2, len + 1);
	start_s2 = s2;
	s2[len] = '\0';
	i = -1;
	while (s1[++i])
		s2[i] = (unsigned char)s1[i];
	return ((char *)start_s2);
}
