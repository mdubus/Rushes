/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_strcmp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:17:05 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:06:11 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit/includes/libunit.h"
#include "../basic_tests.h"

/*
** To past a test comment a load_test call, if it's the first load_test swap
** the first attribution of testlist and the first NULL param
*/

int		strcmp_launcher(void)
{
	t_unit_test *testlist;

	f_put_s("\n\nft_strcmp\n");
	testlist = load_test(NULL, "Basic test", &basic_test_strcmp);
	load_test(testlist, "NULL test", &null_test_strcmp);
	load_test(testlist, "Char test", &char_test_strcmp);
	load_test(testlist, "Nombre test", &nbr_test_strcmp);
	return (launch_tests(testlist));
}
