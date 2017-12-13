/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 10:55:39 by mdubus            #+#    #+#             */
/*   Updated: 2017/02/12 17:24:10 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_TESTS_H
# define BASIC_TESTS_H

# include "../framework/libunit/includes/libunit.h"

int		auto_launcher(void);
int		bus_stress_test(void);
int		fail_test(void);
int		segv_test(void);
int		sighill_test(void);
int		ok_test(void);

#endif
