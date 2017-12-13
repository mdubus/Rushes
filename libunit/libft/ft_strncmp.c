/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 09:21:12 by luperez           #+#    #+#             */
/*   Updated: 2014/11/21 08:52:32 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	int				len;
	unsigned char	*s3;
	unsigned char	*s4;

	if ((s1 == NULL && s2 == NULL) || n < 1)
		return (0);
	if (s1 == NULL || s2 == NULL)
		return (1);
	len = (int)n;
	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[i] == s4[i] && s3[i] && s4[i] && --len)
		i++;
	if (s3[i] == s4[i])
		return (0);
	return (s3[i] - s4[i]);
}
