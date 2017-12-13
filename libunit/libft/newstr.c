/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/30 02:43:12 by luperez           #+#    #+#             */
/*   Updated: 2014/11/30 03:04:33 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_str	*newstr(char *s)
{
	t_str	*str;

	str = (t_str *)malloc(sizeof(t_str));
	if (str == NULL)
		return (NULL);
	str->str = s;
	str->next = NULL;
	return (str);
}
