/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_loose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 10:36:06 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 11:42:53 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	can_move_horiz(t_rush *rush)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rush->size && rush->can_move == 0)
	{
		j = 0;
		while (j + 1 < rush->size && rush->can_move == 0)
		{
			if (rush->tab[i][j] == rush->tab[i][j + 1])
				rush->can_move = 1;
			j++;
		}
		i++;
	}
}

static void	can_move_vertic(t_rush *rush)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < rush->size && rush->can_move == 0)
	{
		i = 0;
		while (i + 1 < rush->size && rush->can_move == 0)
		{
			if (rush->tab[i][j] == rush->tab[i + 1][j])
				rush->can_move = 1;
			i++;
		}
		j++;
	}
}

void		check_if_can_move(t_rush *rush)
{
	can_move_horiz(rush);
	if (rush->can_move == 0)
		can_move_vertic(rush);
	if (rush->can_move == 0)
		rush->loose = 1;
	rush->can_move = 0;
}
