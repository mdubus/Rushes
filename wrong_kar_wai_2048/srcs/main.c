/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:10:35 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 19:00:16 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	print_all(t_rush *rush)
{
	search_for_max(rush);
	erase();
	getmaxyx(stdscr, rush->height_w, rush->width_w);
	print_game_name(*rush);
	print_board(*rush);
	if (rush->win == 1)
		win(rush);
	if (rush->loose == 1)
		game_over(*rush);
	refresh();
}

static void	play(t_rush *rush)
{
	if (rush->loose == 0)
		arrow_keys(rush);
	if (rush->moved == 1)
	{
		place_random_number(rush);
		rush->moved = 0;
		if (check_if_full(rush) == 0)
			check_if_can_move(rush);
	}
}

int			main(void)
{
	t_rush	rush;

	if (init(&rush) == 1)
		return (1);
	while (1)
	{
		print_all(&rush);
		rush.key = getch();
		if (rush.key == ESC || rush.key == Q)
			break ;
		if (rush.key == R)
			reload_game(&rush);
		if (rush.key == M)
			if (menu(&rush) == 1)
				break ;
		play(&rush);
	}
	endwin();
	return (0);
}
