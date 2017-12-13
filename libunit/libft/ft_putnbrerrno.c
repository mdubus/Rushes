/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrerrno.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:38:36 by luperez           #+#    #+#             */
/*   Updated: 2014/11/29 21:22:48 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbrerrno(int nbr)
{
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			ft_putstrerrno("-2147483648");
			return ;
		}
		ft_putcharerrno('-');
		nbr = -1 * nbr;
	}
	if (nbr / 10 > 0)
		ft_putnbr(nbr / 10);
	else
	{
		ft_putcharerrno(nbr + '0');
		return ;
	}
	ft_putcharerrno(nbr % 10 + '0');
}
