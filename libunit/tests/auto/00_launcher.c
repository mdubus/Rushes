/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:10:15 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:24:25 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit/includes/libunit.h"
#include "../basic_tests.h"

int		auto_launcher(void)
{
	t_unit_test *testlist;

	testlist = load_test(NULL, "Fail test", &fail_test);
	load_test(testlist, "SEGV test", &segv_test);
	load_test(testlist, "BUS Stress test", &bus_stress_test);
	load_test(testlist, "SIGILL test", &sighill_test);
	load_test(testlist, "OK test", &ok_test);
	return (launch_tests(testlist));
}
