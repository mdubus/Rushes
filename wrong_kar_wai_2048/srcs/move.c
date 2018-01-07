/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 18:35:31 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/06 18:36:43 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	arrow_keys(t_rush *rush)
{
	if (rush->key == KEY_LEFT)
	{
		rush->flag_refresh = 1;
		move_left(rush);
	}
	else if (rush->key == KEY_RIGHT)
	{
		rush->flag_refresh = 1;
		move_right(rush);
	}
	else if (rush->key == KEY_UP)
	{
		rush->flag_refresh = 1;
		move_up(rush);
	}
	else if (rush->key == KEY_DOWN)
	{
		rush->flag_refresh = 1;
		move_down(rush);
	}
}
