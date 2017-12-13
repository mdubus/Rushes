/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_str_occur.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 01:14:24 by luperez           #+#    #+#             */
/*   Updated: 2015/02/15 13:14:21 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_str_occur(const char *s, char *c)
{
	size_t	len;
	int		occur;
	char	*str;
	size_t	i;

	str = (char *)s;
	len = ft_strlen(c);
	occur = 0;
	i = -1;
	while (str[++i])
	{
		if (!ft_strncmp(&str[i], c, len))
		{
			occur++;
			i += len;
		}
	}
	if (c == '\0')
		occur++;
	return (occur);
}
