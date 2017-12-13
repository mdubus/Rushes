/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 03:53:27 by luperez           #+#    #+#             */
/*   Updated: 2014/12/21 23:56:33 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*lst_create(void *lst)
{
	size_t	len;

	len = sizeof(lst);
	if (len < 1)
		return (NULL);
	lst = (void *)malloc(len);
	if (lst == NULL)
		return (NULL);
	ft_bzero(lst, len);
	return (lst);
}
