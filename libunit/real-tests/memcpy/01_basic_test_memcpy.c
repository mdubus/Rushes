/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_memcpy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:36 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 16:11:29 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basic_tests.h"
#include <string.h>

int		basic_test_memcpy(void)
{
	char	*str;
	char	*str_cpy[5];

	str = ft_strdup("test");
	f_put_s(ft_memcpy(str_cpy, str, 4));
	return (0);
}
