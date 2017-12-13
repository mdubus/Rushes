/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:55:24 by luperez           #+#    #+#             */
/*   Updated: 2014/11/19 07:21:31 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*p;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	i = -1;
	p = (char *)malloc(sizeof(char) * len);
	bzero(p, len);
	while (s[++i])
		p[i] = f(s[i]);
	p[i] = '\0';
	return (p);
}
