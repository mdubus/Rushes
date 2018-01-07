/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_for_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 18:02:48 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 18:31:39 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	search_for_max(t_rush *rush)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rush->size)
	{
		j = 0;
		while (j < rush->size)
		{
			if (rush->score_max < rush->tab[i][j])
				rush->score_max = rush->tab[i][j];
			j++;
		}
		i++;
	}
	if (rush->score_max >= WIN_VALUE)
		rush->win = 1;
}
