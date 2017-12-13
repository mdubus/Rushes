/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 07:18:30 by luperez           #+#    #+#             */
/*   Updated: 2014/11/27 01:44:02 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = NULL;
	start = NULL;
	while (lst)
	{
		new = f(ft_lstnew(lst->content, lst->content_size));
		if (!start)
			start = new;
		tmp = ft_lstpush(&tmp, new);
		lst = lst->next;
	}
	return (start);
}
