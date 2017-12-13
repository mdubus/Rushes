/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_strcmp.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:36 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 16:54:56 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../basic_tests.h"

int		basic_test_strcmp(void)
{
	if (ft_strcmp("abc", "cba") == strcmp("abc", "cba"))
	{
		f_put_s("aaaaaaaaaaaaa");
		return (0);
	}
	return (-1);
}
