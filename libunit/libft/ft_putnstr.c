/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:38:50 by luperez           #+#    #+#             */
/*   Updated: 2015/02/15 13:14:51 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *str, unsigned int n)
{
	unsigned int	len;

	len = ft_strlen(str);
	n = (n > len) ? len : n;
	write(1, str, n);
}
