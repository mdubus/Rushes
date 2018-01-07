/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:12:54 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 18:44:25 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

static void	print_menu_name(t_rush rush)
{
	char	*menu[6];
	int		i;
	int		start_h;

	i = 0;
	menu[0] = "___  ___ _____ _   _ _   _ ";
	menu[1] = "|  \\/  ||  ___| \\ | | | | |";
	menu[2] = "| .  . || |__ |  \\| | | | |";
	menu[3] = "| |\\/| ||  __|| . ` | | | |";
	menu[4] = "| |  | || |___| |\\  | |_| |";
	menu[5] = "\\_|  |_/\\____/\\_| \\_/\\___/ ";
	attron(COLOR_PAIR(1));
	while (i < 6)
	{
		mvprintw(i + 2, (rush.width_w - ft_strlen(menu[i])) / 2, "%s", menu[i]);
		i++;
	}
	attroff(COLOR_PAIR(1));
	start_h = 12;
	mvprintw(start_h, (rush.width_w - 26) / 2,
			"Change board size : < %d >", rush.size);
	mvprintw(start_h + 2, (rush.width_w - 23) / 2, "Press enter to continue");
	mvprintw(start_h + 4, (rush.width_w - 23) / 2, "Or Esc to exit the game");
}

static void	change_rush_size(t_rush *rush)
{
	if (rush->key == KEY_RIGHT)
	{
		rush->size += 1;
		if (rush->size > 8)
			rush->size = 4;
	}
	if (rush->key == KEY_LEFT)
	{
		rush->size -= 1;
		if (rush->size < 4)
			rush->size = 8;
	}
}

int			menu(t_rush *rush)
{
	erase();
	print_menu_name(*rush);
	refresh();
	while (1)
	{
		rush->key = getch();
		erase();
		getmaxyx(stdscr, rush->height_w, rush->width_w);
		change_rush_size(rush);
		if (rush->key == ESC || rush->key == Q)
			return (1);
		if (rush->key == 10)
			break ;
		print_menu_name(*rush);
		refresh();
	}
	init_tab(rush);
	place_random_number(rush);
	place_random_number(rush);
	rush->win = 0;
	rush->score_max = 0;
	rush->loose = 0;
	return (0);
}
