/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 01:40:33 by luperez           #+#    #+#             */
/*   Updated: 2014/11/09 08:03:36 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	*str;
	int		i;

	i = -1;
	last = NULL;
	str = (char *)s;
	while (str[++i] != '\0')
	{
		if (str[i] == c)
			last = &str[i];
	}
	if (c == '\0')
		last = &str[i];
	return (last);
}
