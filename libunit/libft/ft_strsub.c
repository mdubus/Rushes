/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 19:23:34 by luperez           #+#    #+#             */
/*   Updated: 2015/01/23 19:27:10 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*move;
	char	*sub;

	if (start == '\0' && len == 0)
		return (ft_strnew(1));
	sub = NULL;
	if (s == NULL || start < 1 || len < 1 || !(sub = ft_strnew(len)))
		return (NULL);
	move = (char *)&s[start];
	i = -1;
	while (sub[++i] && len--)
		sub[i] = move[i];
	sub[++i] = '\0';
	return (sub);
}
