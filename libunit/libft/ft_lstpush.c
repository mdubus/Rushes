/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 06:36:51 by luperez           #+#    #+#             */
/*   Updated: 2014/12/02 07:12:57 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpush(t_list **alst, t_list *newlst)
{
	t_list	*tmp;

	if (!newlst)
		return (NULL);
	if (!alst || !*alst)
		return (newlst);
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newlst;
	return (newlst);
}
