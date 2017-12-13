/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:38:36 by luperez           #+#    #+#             */
/*   Updated: 2014/11/19 03:31:17 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ft_putstr("-2147483648");
			return ;
		}
		ft_putchar('-');
		nbr = -1 * nbr;
	}
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	else
	{
		ft_putchar(nbr + '0');
		return ;
	}
	ft_putchar(nbr % 10 + '0');
}
