/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reload_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 11:46:16 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 16:41:17 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	reload_game(t_rush *rush)
{
	erase();
	init_tab(rush);
	place_random_number(rush);
	place_random_number(rush);
	print_game_name(*rush);
	print_board(*rush);
	refresh();
	rush->win = 0;
	rush->score_max = 0;
	rush->loose = 0;
}
