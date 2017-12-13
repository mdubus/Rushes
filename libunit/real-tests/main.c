/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:57:52 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:13:38 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic_tests.h"

int		main(void)
{
	int count;
	int fail;

	f_put_s("\033[32m*********************************\n");
	f_put_s("**       \033[33m42 - Unit Tests\033[32m     ****\n");
	f_put_s("*********************************\033[0m");
	count = 0;
	fail = 0;
	if (++count && strlen_launcher() == 0)
		f_put_s("ft_strlen [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (++count && putnbr_launcher() == 0)
		f_put_s("ft_putnbr [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (++count && memcpy_launcher() == 0)
		f_put_s("ft_memcpy [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (++count && strcmp_launcher() == 0)
		f_put_s("ft_mstrcmp [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (++count && atoi_launcher() == 0)
		f_put_s("ft_atoi [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (++count && itoa_launcher() == 0)
		f_put_s("ft_itoa [\033[1;32mOK\033[0m]\n");
	else
		fail++;
	if (fail == 0)
		f_put_s("\n\n\033[1;32mAll tests OK !\033[0m");
	else
	{
		f_put_s((fail == count) ? "\n\n\033[32m" : "\n\n\033[33m");
		f_put_s("Recap libft: ");
		f_put_n(count - fail);
		f_put_c('/');
		f_put_n(count);
		f_put_s("\033[0m\n");
	}
	return (0);
}
