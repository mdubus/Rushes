/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_c_occur.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 13:12:36 by luperez           #+#    #+#             */
/*   Updated: 2015/02/15 13:12:38 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_c_occur(const char *s, int c)
{
	int		occur;
	char	*str;
	int		i;

	occur = 0;
	i = -1;
	str = (char *)s;
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			occur++;
	}
	if (c == '\0')
		occur++;
	return (occur);
}
