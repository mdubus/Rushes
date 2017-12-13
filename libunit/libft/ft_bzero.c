/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:37:17 by luperez           #+#    #+#             */
/*   Updated: 2014/11/05 19:37:19 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				len;
	unsigned char	*str;

	if (1 > n)
		return ;
	len = (int)n;
	str = (unsigned char *)s;
	*str = '\0';
	while (len--)
		*str++ = '\0';
}
