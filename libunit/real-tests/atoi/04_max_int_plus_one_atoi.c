/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_max_int_plus_one_atoi.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:36 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:04:53 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basic_tests.h"

int		max_int_plus_one_test_atoi(void)
{
	if (ft_atoi("2147483648") == atoi("2147483648"))
		return (0);
	return (-1);
}