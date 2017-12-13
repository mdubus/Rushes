/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 04:11:31 by luperez           #+#    #+#             */
/*   Updated: 2014/12/03 04:33:37 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_positive(int n)
{
	if (n == -2147483648)
	{
		ft_putstrerrno("I can't make positive the -2147483648 value in int");
		exit(2);
	}
	if (n < 0)
		return (-1 * n);
	return (n);
}
