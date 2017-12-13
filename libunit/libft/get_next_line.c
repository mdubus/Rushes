/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 00:04:04 by luperez           #+#    #+#             */
/*   Updated: 2014/11/28 17:09:52 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_hist	*new_historic(int const fd)
{
	t_hist	*historic;

	historic = (t_hist *)malloc(sizeof(t_hist));
	if (historic == NULL)
		return (NULL);
	historic->fd = fd;
	historic->garbage = NULL;
	historic->start = NULL;
	return (historic);
}

static t_str	*new_str(void)
{
	t_str	*str;

	str = (t_str *)malloc(sizeof(t_str));
	if (str == NULL)
		return (NULL);
	str->str = NULL;
	str->next = NULL;
	return (str);
}

static int		achievement(t_hist *historic, char **line)
{
	size_t	len;
	int		i;
	int		y;

	if (!historic)
		return (-1);
	y = -1;
	len = ft_s_strlen(historic->start);
	*line = ft_strnew(len);
	while (historic->start)
	{
		i = -1;
		while (historic->start->str[++i])
			line[0][++y] = historic->start->str[i];
		historic->start = historic->start->next;
	}
	return (1);
}

static int		loop(t_str *str, t_hist *historic,\
char **line, int success)
{
	int				i;

	while (success && str)
	{
		i = -1;
		while (str->str[++i] && str->str[i] != '\n' && str->str[i] != '\r')
			;
		if (str->str[i] == '\n' || str->str[i] == '\r')
		{
			while (str->str[i] == '\n')
				str->str[i++] = '\0';
			historic->garbage = &str->str[i];
			return (achievement(historic, line));
		}
		str->next = new_str();
		str = str->next;
		str->str = ft_strnew(BUFF_SIZE);
		success = read(historic->fd, str->str, BUFF_SIZE);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static t_hist	*historic;
	t_str			*str;
	int				success;

	success = 1;
	str = new_str();
	if (historic && historic->fd == fd && historic->garbage)
		str->str = historic->garbage;
	else
	{
		historic = new_historic(fd);
		str->str = ft_strnew(BUFF_SIZE);
		success = read(fd, str->str, BUFF_SIZE);
	}
	historic->start = str;
	if (loop(str, historic, line, success))
		return (1);
	achievement(historic, line);
	return (0);
}
