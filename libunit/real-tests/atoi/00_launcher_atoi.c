/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:25:33 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:05:57 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit/includes/libunit.h"
#include "../basic_tests.h"

/*
** To past a test comment a load_test call, if it's the first load_test swap
** the first attribution of testlist and the first NULL param
*/

int		atoi_launcher(void)
{
	t_unit_test *testlist;

	f_put_s("\n\nft_atoi\n");
	testlist = load_test(NULL, "Basic test", &basic_test_atoi);
	load_test(testlist, "NULL test", &null_test_atoi);
	load_test(testlist, "Max int test", &max_int_test_atoi);
	load_test(testlist, "Max int plus one test", &max_int_plus_one_test_atoi);
	return (launch_tests(testlist));
}
