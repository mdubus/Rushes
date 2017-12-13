/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_memcpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:25:33 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:06:06 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit/includes/libunit.h"
#include "../basic_tests.h"

/*
** To past a test comment a load_test call, if it's the first load_test swap
** the first attribution of testlist and the first NULL param
*/

int		memcpy_launcher(void)
{
	t_unit_test *testlist;

	f_put_s("\n\nft_memcpy\n");
	testlist = load_test(NULL, "Basic test", &basic_test_memcpy);
	load_test(testlist, "NULL test", &null_test_memcpy);
	load_test(testlist, "Bus error test", &bus_test_memcpy);
	return (launch_tests(testlist));
}
