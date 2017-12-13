/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:51:18 by mdubus            #+#    #+#             */
/*   Updated: 2017/02/12 16:48:11 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include "../framework/libunit/includes/libunit.h"
# include "../libft/includes/libft.h"
# include <string.h>

int				putnbr_launcher(void);
int				strlen_launcher(void);
int				memcpy_launcher(void);
int				strcmp_launcher(void);
int				atoi_launcher(void);
int				itoa_launcher(void);

int				basic_test_strlen(void);
int				null_test_strlen(void);

int				basic_test_putnbr(void);
int				null_test_putnbr(void);
int				char_test_putnbr(void);
int				max_int_test_putnbr(void);

int				basic_test_memcpy(void);
int				null_test_memcpy(void);
int				bus_test_memcpy(void);

int				basic_test_strcmp(void);
int				null_test_strcmp(void);
int				char_test_strcmp(void);
int				nbr_test_strcmp(void);

int				basic_test_atoi(void);
int				null_test_atoi(void);
int				max_int_test_atoi(void);
int				max_int_plus_one_test_atoi(void);

int				basic_test_itoa(void);
int				null_test_itoa(void);
int				max_int_test_itoa(void);
int				max_int_plus_one_test_itoa(void);
#endif
