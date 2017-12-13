/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:33:49 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 17:13:14 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test		*load_test(t_unit_test *list, char *name, void *func)
{
	t_unit_test	*link;

	link = (t_unit_test *)malloc(sizeof(t_unit_test));
	link->name = name;
	link->func = func;
	link->next = NULL;
	link->result = 0;
	if (!list)
		return (link);
	while (list->next)
		list = list->next;
	list->next = link;
	return (NULL);
}

void			recap_count(t_unit_test *list)
{
	int		count;
	int		fails;

	count = 0;
	fails = 0;
	while (list)
	{
		if (list->result)
			fails++;
		count++;
		list = list->next;
	}
	f_put_s((fails) ? "\033[31m" : "\033[32m");
	f_put_n((count - fails));
	f_put_s("/");
	f_put_n(count);
	f_put_s(" tests checked\033[0m\n");
}

int				loop_tests(t_unit_test *list)
{
	int			perfect;
	int			pid;
	int			statu;

	perfect = 0;
	while (list)
	{
		pid = fork();
		if (pid > 0)
		{
			wait(&statu);
			list->result = statu;
			f_put_s("\033[35m> ");
			f_put_s(list->name);
			f_put_s(" :\033[0m [");
			if (print_statu(statu) != 0 && perfect == 0)
				perfect = -1;
			f_put_s("]\n\n");
		}
		else if (!pid && close(1) == 0)
			exit(list->func());
		list = list->next;
	}
	return (perfect);
}

int				launch_tests(t_unit_test *list)
{
	int			perfect;

	if (!list)
	{
		f_put_s("Empty list of test");
		return (1);
	}
	perfect = loop_tests(list);
	recap_count(list);
	return (perfect);
}
