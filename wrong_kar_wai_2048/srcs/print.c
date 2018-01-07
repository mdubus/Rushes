/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:54:06 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 16:19:09 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	print_game_name(t_rush rush)
{
	int	i;

	i = 0;
	mvprintw(1, 3, "M : Menu");
	mvprintw(2, 3, "R : Restart a game");
	mvprintw(3, 3, "Esc : Exit");
	attron(COLOR_PAIR(1));
	while (i < SIZE_HEADER)
	{
		mvprintw(i + 2, (rush.width_w - ft_strlen(rush.name[i])) / 2,
				"%s", rush.name[i]);
		i++;
	}
	attroff(COLOR_PAIR(1));
	box(stdscr, ACS_VLINE, ACS_HLINE);
}
