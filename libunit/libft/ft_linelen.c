/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 11:51:24 by luperez           #+#    #+#             */
/*   Updated: 2015/01/08 13:36:36 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_linelen(char *str)
{
	size_t	len;

	len = 0;
	while (str && *str && *str++ != '\n')
		len++;
	return (len);
}
