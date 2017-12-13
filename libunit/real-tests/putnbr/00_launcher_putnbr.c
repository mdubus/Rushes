/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:17:05 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:05:43 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit/includes/libunit.h"
#include "../basic_tests.h"

/*
** To past a test comment a load_test call, if it's the first load_test swap
** the first attribution of testlist and the first NULL param
*/

int		putnbr_launcher(void)
{
	t_unit_test *testlist;

	f_put_s("\n\nft_putnbr\n");
	testlist = load_test(NULL, "Basic test", &basic_test_putnbr);
	load_test(testlist, "NULL test", &null_test_putnbr);
	load_test(testlist, "Char test", &char_test_putnbr);
	load_test(testlist, "Max int test", &max_int_test_putnbr);
	return (launch_tests(testlist));
}
