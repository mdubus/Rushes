/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_get_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 00:04:04 by luperez           #+#    #+#             */
/*   Updated: 2015/01/28 00:49:45 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_str	*new_str(void)
{
	t_str	*str;

	str = (t_str *)malloc(sizeof(t_str));
	if (str == NULL)
		return (NULL);
	str->str = ft_strnew(BUFF_SIZE);
	str->next = NULL;
	return (str);
}

static int		achievement(t_str *strs, char **line)
{
	int		i;
	int		y;
	int		lines;

	if (!strs)
		return (0);
	y = -1;
	lines = 1;
	*line = ft_strnew(ft_s_strlen(strs) + 1);
	while (strs)
	{
		i = -1;
		while (strs->str[++i])
		{
			if (strs->str[i] == '\n')
				lines++;
			line[0][++y] = strs->str[i];
		}
		strs = strs->next;
	}
	return (lines);
}

int				file_get_content(char *path, char **line)
{
	int		l;
	int		fd;
	t_str	*str;
	t_str	*start;

	fd = open(path, O_RDONLY);
	if (errno == ENOENT || errno == EACCES)
		return (0);
	str = new_str();
	start = str;
	while (str && str->str && read(fd, str->str, BUFF_SIZE))
	{
		str->next = new_str();
		str = str->next;
	}
	l = achievement(start, line);
	delstr(start);
	close(fd);
	return (l);
}
