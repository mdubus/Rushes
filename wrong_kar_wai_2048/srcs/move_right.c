/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 17:34:14 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:25:07 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	move_whitespace_right(t_rush *rush, int i)
{
	int	j;
	int	k;

	j = rush->size - 1;
	k = rush->size;
	while (k > 0)
	{
		j = rush->size - 1;
		while (j > 0)
		{
			if (rush->tab[i][j] == 0 && rush->tab[i][j - 1] != 0)
			{
				rush->tab[i][j] = rush->tab[i][j - 1];
				rush->tab[i][j - 1] = 0;
				rush->moved = 1;
			}
			j--;
		}
		k--;
	}
}

static void	merge_right(t_rush *rush, int i)
{
	int	j;

	j = rush->size - 1;
	while (j > 0)
	{
		if (rush->tab[i][j] != 0 && rush->tab[i][j] == rush->tab[i][j - 1])
		{
			rush->tab[i][j] += rush->tab[i][j - 1];
			rush->tab[i][j - 1] = 0;
			rush->moved = 1;
		}
		j--;
	}
}

void		move_right(t_rush *rush)
{
	int	i;

	i = 0;
	while (i < rush->size)
	{
		move_whitespace_right(rush, i);
		merge_right(rush, i);
		move_whitespace_right(rush, i);
		i++;
	}
}
