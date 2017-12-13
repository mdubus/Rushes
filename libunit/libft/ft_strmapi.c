/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 18:55:24 by luperez           #+#    #+#             */
/*   Updated: 2014/11/19 07:24:04 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	size_t			len;

	if (s == NULL || f == NULL)
		return (NULL);
	i = -1;
	len = ft_strlen(s) + 1;
	p = (char *)malloc(sizeof(char) * len);
	while (s[++i])
		p[i] = f(i, s[i]);
	p[i] = '\0';
	return (p);
}
