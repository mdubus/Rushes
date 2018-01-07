/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:38:54 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:30:10 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	first_line(t_rush rush, int *start_h, int start_w)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < rush.size)
	{
		k = 0;
		mvprintw(*start_h, start_w, " ");
		start_w += 1;
		while (k < rush.size_rect)
		{
			mvprintw(*start_h, start_w, "_");
			start_w += 1;
			k++;
		}
		mvprintw(*start_h, start_w, " ");
		j++;
	}
	*start_h += 1;
}

static void	second_line(t_rush rush, int *start_h, int start_w)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < rush.size)
	{
		k = 0;
		mvprintw(*start_h, start_w, "|");
		start_w += 1;
		while (k < rush.size_rect)
		{
			mvprintw(*start_h, start_w, " ");
			start_w += 1;
			k++;
		}
		j++;
		mvprintw(*start_h, start_w, "|");
	}
	*start_h += 1;
}

static void	number_line(t_rush rush, int *start_h, int start_w, int i)
{
	int	j;

	j = 0;
	while (j < rush.size)
	{
		if (j == 0)
		{
			mvprintw(*start_h, start_w, "| ");
			start_w += 2;
		}
		if (rush.tab[i][j] != 0)
			mvprintw(*start_h, start_w, "%*d", rush.size_rect - 2,
					rush.tab[i][j]);
		start_w += rush.size_rect - 1;
		j++;
		mvprintw(*start_h, start_w, "| ");
		start_w += 2;
	}
	*start_h += 1;
}

static void	last_line(t_rush rush, int *start_h, int start_w)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < rush.size)
	{
		k = 0;
		mvprintw(*start_h, start_w, "|");
		start_w += 1;
		while (k < rush.size_rect)
		{
			mvprintw(*start_h, start_w, "_");
			start_w += 1;
			k++;
		}
		j++;
		mvprintw(*start_h, start_w, "|");
	}
	*start_h += 1;
}

void		print_board(t_rush rush)
{
	int	i;
	int	start_w;
	int	start_h;

	i = 0;
	start_h = SIZE_HEADER + 6;
	start_w = (rush.width_w -
				(rush.size * rush.size_rect + rush.size * 2)) / 2;
	first_line(rush, &start_h, start_w);
	while (i < rush.size)
	{
		second_line(rush, &start_h, start_w);
		number_line(rush, &start_h, start_w, i);
		last_line(rush, &start_h, start_w);
		i++;
	}
}
