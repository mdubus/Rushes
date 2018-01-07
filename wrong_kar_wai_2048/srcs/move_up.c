/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 18:11:11 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:24:06 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	merge_up(t_rush *rush, int j)
{
	int	i;

	i = 0;
	while (i + 1 < rush->size)
	{
		if (rush->tab[i][j] != 0 && rush->tab[i][j] == rush->tab[i + 1][j])
		{
			rush->tab[i][j] += rush->tab[i + 1][j];
			rush->tab[i + 1][j] = 0;
			rush->moved = 1;
		}
		i++;
	}
}

static void	move_whitespace_up(t_rush *rush, int j)
{
	int	i;
	int	k;

	i = 0;
	k = rush->size;
	while (k > 0)
	{
		i = 0;
		while (i + 1 < rush->size)
		{
			if (rush->tab[i][j] == 0 && rush->tab[i + 1][j] != 0)
			{
				rush->tab[i][j] = rush->tab[i + 1][j];
				rush->tab[i + 1][j] = 0;
				rush->moved = 1;
			}
			i++;
		}
		k--;
	}
}

void		move_up(t_rush *rush)
{
	int	j;

	j = 0;
	while (j < rush->size)
	{
		move_whitespace_up(rush, j);
		merge_up(rush, j);
		move_whitespace_up(rush, j);
		j++;
	}
}
