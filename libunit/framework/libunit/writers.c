/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 13:38:13 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:01:35 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	f_put_c(char c)
{
	write(1, &c, 1);
}

void	f_put_n(int n)
{
	if (n == -2147483648)
		f_put_s("-2147483648");
	else if (n > -2147483648 && n < -10)
	{
		f_put_c('-');
		n = n * -1;
		f_put_n(n / 10);
		f_put_n(n % 10);
	}
	else if (n < 0 && n > -10)
	{
		f_put_c('-');
		f_put_c((char)-n + '0');
	}
	else if (n >= 0 && n <= 9)
	{
		f_put_c((char)n + '0');
	}
	else if (n > 9)
	{
		f_put_n(n / 10);
		f_put_n(n % 10);
	}
}

void	f_put_s(char const *s)
{
	write(1, s, f_s_len(s));
}

size_t	f_s_len(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		print_statu(int statu)
{
	if (statu == 0)
	{
		f_put_s("\033[32mOK\033[0m");
		return (0);
	}
	else if (statu < 0 || statu > 31)
		f_put_s("\033[31mKO\033[0m");
	else
	{
		f_put_s("\033[31m");
		f_put_s(status_to_name(statu));
		f_put_s("\033[0m");
	}
	return (-1);
}
