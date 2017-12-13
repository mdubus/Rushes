/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:36 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 14:42:31 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basic_tests.h"
#include <string.h>

int		basic_test_strlen(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	return (-1);
}
