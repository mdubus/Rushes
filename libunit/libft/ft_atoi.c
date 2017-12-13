/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:37:31 by luperez           #+#    #+#             */
/*   Updated: 2014/11/15 17:07:41 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_c_white(char grey)
{
	if (grey != '-' && grey != '+' && (grey == ' ' || grey == '\t' ||
		grey == '\r' || grey == '\n' || grey == '\v' || grey == '\f'))
		return (1);
	return (0);
}

int			ft_atoi(const char *s)
{
	int		len;
	int		nbr;
	int		i;
	int		mult;

	i = 0;
	nbr = 0;
	len = ft_strlen(s);
	while (is_c_white(s[i]))
		++i;
	while (s[i] == '0')
		++i;
	mult = ((s[i] == '+' || s[i] == '-') && ++i && s[i - 1] == '-') ? -1 : 1;
	while (i < len)
		if (s[i] < 48 || s[i] > 57)
			return (nbr * mult);
		else
			nbr = (nbr * 10) + (s[i++] - '0');
	return (nbr * mult);
}
