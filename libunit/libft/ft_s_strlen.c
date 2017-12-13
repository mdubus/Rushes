/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 05:53:42 by luperez           #+#    #+#             */
/*   Updated: 2014/11/27 07:10:05 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_s_strlen(t_str *str)
{
	int		i;

	i = 0;
	if (!str || !str->str)
		ft_putstr("s_strlen error: empty cell.");
	while (str)
	{
		i += ft_strlen(str->str);
		str = str->next;
	}
	return (i);
}
