/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_full.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 11:42:13 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 11:42:47 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

int			check_if_full(t_rush *rush)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (i < rush->size && flag == 0)
	{
		j = 0;
		while (j < rush->size && flag == 0)
		{
			if (rush->tab[i][j] == 0)
				flag = 1;
			j++;
		}
		i++;
	}
	return (flag);
}
