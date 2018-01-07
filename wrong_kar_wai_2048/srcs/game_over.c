/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_over.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 10:44:20 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 17:59:30 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	game_over(t_rush rush)
{
	char	*str;
	int		start_h;

	erase();
	print_game_name(rush);
	print_board(rush);
	str = "GAME OVER !";
	start_h = SIZE_HEADER + 6 + (rush.size * 3) + 4;
	mvprintw(start_h, (rush.width_w - ft_strlen(str)) / 2, str);
	start_h += 2;
	str = "Press 'Esc' to exit the game";
	mvprintw(start_h, (rush.width_w - ft_strlen(str)) / 2, str);
	start_h += 1;
	str = "Or 'R' to start a new game";
	mvprintw(start_h, (rush.width_w - ft_strlen(str)) / 2, str);
	move(start_h + 1, rush.width_w / 2);
}
