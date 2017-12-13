/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 21:58:00 by luperez           #+#    #+#             */
/*   Updated: 2015/01/29 21:58:20 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	implode(char **tab, char *glue)
{
	int	i;

	if (!glue)
		ft_error("Give me a separator man !");
	if (!tab)
		ft_error("I can't implode an empty tab.");
	i = -1;
	while (tab[++i])
	{
		ft_putstr(tab[i]);
		if (tab[i + 1])
		{
			ft_putstr(glue);
		}
	}
}
