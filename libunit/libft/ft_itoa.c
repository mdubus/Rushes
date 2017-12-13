/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:38:36 by luperez           #+#    #+#             */
/*   Updated: 2014/12/03 04:34:57 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*a;
	int		i;

	if (n == -2147483648)
		return ((a = "-2147483648"));
	i = ft_nbrlen(n);
	a = (char *)malloc(sizeof(char) * i + 1);
	if (a == NULL)
		return (NULL);
	if (n < 0 && ++i)
		a[0] = '-';
	a[i] = '\0';
	while (n / 10 != 0)
	{
		a[--i] = ft_positive(ft_unite(n)) + '0';
		n = n / 10;
	}
	a[--i] = ft_positive(ft_unite(n)) + '0';
	return (a);
}
