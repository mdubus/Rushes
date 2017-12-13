/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:44:11 by mdubus            #+#    #+#             */
/*   Updated: 2017/02/12 17:02:41 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct			s_unit_test
{
	char				*name;
	int					(*func)(void);
	int					result;
	struct s_unit_test	*next;
}						t_unit_test;

char					*status_to_name(int status);
t_unit_test				*load_test(t_unit_test *list, char *name, void *func);
int						launch_tests(t_unit_test *list);
int						print_statu(int statu);

void					f_put_n(int n);
void					f_put_c(char c);
void					f_put_s(char const *s);
size_t					f_s_len(const char *s);

#endif
