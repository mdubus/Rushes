/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 18:29:30 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:25:48 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	merge_down(t_rush *rush, int j)
{
	int	i;

	i = rush->size - 1;
	while (i > 0)
	{
		if (rush->tab[i][j] != 0 && rush->tab[i][j] == rush->tab[i - 1][j])
		{
			rush->tab[i][j] += rush->tab[i - 1][j];
			rush->tab[i - 1][j] = 0;
			rush->moved = 1;
		}
		i--;
	}
}

static void	move_whitespace_down(t_rush *rush, int j)
{
	int	i;
	int	k;

	i = rush->size - 1;
	k = rush->size;
	while (k > 0)
	{
		i = rush->size - 1;
		while (i > 0)
		{
			if (rush->tab[i][j] == 0 && rush->tab[i - 1][j] != 0)
			{
				rush->tab[i][j] = rush->tab[i - 1][j];
				rush->tab[i - 1][j] = 0;
				rush->moved = 1;
			}
			i--;
		}
		k--;
	}
}

void		move_down(t_rush *rush)
{
	int	j;

	j = 0;
	while (j < rush->size)
	{
		move_whitespace_down(rush, j);
		merge_down(rush, j);
		move_whitespace_down(rush, j);
		j++;
	}
}
