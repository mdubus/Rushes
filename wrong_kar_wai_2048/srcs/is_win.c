/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_win.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:29:32 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 14:29:35 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void		win(t_rush *rush)
{
	int		start_h;
	char	*str;

	start_h = 0;
	str = NULL;
	str = "YOU WIN !";
	start_h = SIZE_HEADER + 6 + (rush->size * 3) + 4;
	mvprintw(start_h, (rush->width_w - ft_strlen(str)) / 2, str);
	start_h += 2;
	str = "Press 'Esc' to exit the game";
	mvprintw(start_h, (rush->width_w - ft_strlen(str)) / 2, str);
	start_h += 1;
	str = "Press 'R' to start a new game";
	mvprintw(start_h, (rush->width_w - ft_strlen(str)) / 2, str);
	start_h += 1;
	str = "Or any arrow key to continue\n";
	mvprintw(start_h, (rush->width_w - ft_strlen(str)) / 2, str);
	rush->win = 1;
	move(start_h + 1, rush->width_w / 2);
}
