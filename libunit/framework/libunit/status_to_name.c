/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status_to_name.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:24:10 by luperez           #+#    #+#             */
/*   Updated: 2017/02/12 14:06:24 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

char			*status_to_name3(int statu)
{
	if (statu == 24)
		return ("SIGXCPU");
	if (statu == 25)
		return ("SIGXFSZ");
	if (statu == 26)
		return ("SIGVTALRM");
	if (statu == 27)
		return ("SIGPROF");
	if (statu == 28)
		return ("SIGWINCH");
	if (statu == 29)
		return ("SIGINFO");
	if (statu == 30)
		return ("SIGUSR1");
	if (statu == 31)
		return ("SIGUSR2");
	return (NULL);
}

char			*status_to_name2(int statu)
{
	if (statu == 12)
		return ("SIGSYS");
	if (statu == 13)
		return ("SIGPIPE");
	if (statu == 14)
		return ("SIGALRM");
	if (statu == 15)
		return ("SIGTERM");
	if (statu == 16)
		return ("SIGURG");
	if (statu == 17)
		return ("SIGSTOP");
	if (statu == 18)
		return ("SIGTSTP");
	if (statu == 19)
		return ("SIGCONT");
	if (statu == 20)
		return ("SIGCHLD");
	if (statu == 21)
		return ("SIGTTIN");
	if (statu == 22)
		return ("SIGTTOU");
	if (statu == 23)
		return ("SIGIO");
	return (status_to_name3(statu));
}

char			*status_to_name(int statu)
{
	if (statu == 1)
		return ("SIGHUP");
	if (statu == 2)
		return ("SIGINT");
	if (statu == 3)
		return ("SIGQUIT");
	if (statu == 4)
		return ("SIGILL");
	if (statu == 5)
		return ("SIGTRAP");
	if (statu == 6)
		return ("SIGABRT");
	if (statu == 7)
		return ("SIGEMT");
	if (statu == 8)
		return ("SIGFPE");
	if (statu == 9)
		return ("SIGKILL");
	if (statu == 10)
		return ("SIGBUS");
	if (statu == 11)
		return ("SIGSEGV");
	return (status_to_name2(statu));
}
