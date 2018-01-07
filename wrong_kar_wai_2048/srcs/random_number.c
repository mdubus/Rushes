/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:38:02 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 12:18:45 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	place_random_number(t_rush *rush)
{
	rush->random_nb = rush->new_nb[rand() % 2];
	rush->random_pos_y = rand() % rush->size;
	rush->random_pos_x = rand() % rush->size;
	while (rush->tab[rush->random_pos_y][rush->random_pos_x] != 0)
	{
		rush->random_pos_y = rand() % rush->size;
		rush->random_pos_x = rand() % rush->size;
	}
	rush->tab[rush->random_pos_y][rush->random_pos_x] = rush->random_nb;
}
