/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 03:48:05 by luperez           #+#    #+#             */
/*   Updated: 2014/11/29 00:29:20 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>

# include "libft.h"

# define BUFF_SIZE 1024

typedef struct		s_hist
{
	int				fd;
	char			*garbage;
	t_str			*start;
}					t_hist;

int					get_next_line(int const fd, char **line);

#endif
