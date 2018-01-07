/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 16:49:59 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:25:30 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	move_whitespace_left(t_rush *rush, int i)
{
	int	j;
	int	k;

	j = 0;
	k = rush->size;
	while (k > 0)
	{
		j = 0;
		while (j + 1 < rush->size)
		{
			if (rush->tab[i][j] == 0 && rush->tab[i][j + 1] != 0)
			{
				rush->tab[i][j] = rush->tab[i][j + 1];
				rush->tab[i][j + 1] = 0;
				rush->moved = 1;
			}
			j++;
		}
		k--;
	}
}

static void	merge_left(t_rush *rush, int i)
{
	int	j;

	j = 0;
	while (j + 1 < rush->size)
	{
		if (rush->tab[i][j] != 0 && rush->tab[i][j] == rush->tab[i][j + 1])
		{
			rush->tab[i][j] = rush->tab[i][j] + rush->tab[i][j + 1];
			rush->tab[i][j + 1] = 0;
			rush->moved = 1;
		}
		j++;
	}
}

void		move_left(t_rush *rush)
{
	int	i;

	i = 0;
	while (i < rush->size)
	{
		move_whitespace_left(rush, i);
		merge_left(rush, i);
		move_whitespace_left(rush, i);
		i++;
	}
}
