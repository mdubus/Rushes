/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 03:14:37 by luperez           #+#    #+#             */
/*   Updated: 2014/12/02 03:20:07 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delstr(t_str *str)
{
	t_str	*tmp;

	while (str->next)
	{
		tmp = str->next;
		free(str->str);
		free(str);
		str = tmp;
	}
	free(str);
}
