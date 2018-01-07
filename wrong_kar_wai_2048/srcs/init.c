/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 13:04:49 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 17:45:58 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	init_rush(t_rush *rush)
{
	rush->key = 0;
	rush->width_w = 0;
	rush->height_w = 0;
	rush->size = 4;
	rush->size_rect = 6;
	rush->new_nb[0] = 2;
	rush->new_nb[1] = 4;
	rush->random_nb = 0;
	rush->flag_refresh = 0;
	rush->score_max = 0;
	rush->win = 0;
	rush->loose = 0;
	rush->moved = 0;
	rush->can_move = 0;
}

static void	init_rush_name(t_rush *rush)
{
	rush->name[0] = " ____   ___  _  _    ___  ";
	rush->name[1] = "|___ \\ / _ \\| || |  ( _ ) ";
	rush->name[2] = "  __) | | | | || |_ / _ \\ ";
	rush->name[3] = " / __/| |_| |__   _| (_) |";
	rush->name[4] = "|_____|\\___/   |_|  \\___/ ";
}

static void	init_ncurses(t_rush *rush)
{
	initscr();
	getmaxyx(stdscr, rush->height_w, rush->width_w);
	keypad(stdscr, TRUE);
	start_color();
	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
	noecho();
	srand(time(NULL));
}

int			init(t_rush *rush)
{
	if (WIN_VALUE < 2 || ft_is_power_of_two(WIN_VALUE) == 0)
	{
		ft_putendl_fd("Error : Invalid win value", STDERR_FILENO);
		return (1);
	}
	init_rush(rush);
	init_rush_name(rush);
	init_ncurses(rush);
	menu(rush);
	if (rush->key == ESC || rush->key == Q)
	{
		endwin();
		return (1);
	}
	erase();
	init_tab(rush);
	place_random_number(rush);
	place_random_number(rush);
	print_game_name(*rush);
	print_board(*rush);
	refresh();
	return (0);
}
