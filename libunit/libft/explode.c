/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 13:11:58 by luperez           #+#    #+#             */
/*   Updated: 2015/03/14 12:58:41 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static unsigned int	count(char *src, char *sep, int reverse)
{
	unsigned int	y;
	unsigned int	x;
	unsigned int	n;

	y = -1;
	n = 0;
	while (src[++y])
	{
		x = -1;
		while (sep[++x] && src[y] != sep[x])
			;
		if (src[y] == sep[x] && ++n && reverse)
			return (y);
	}
	n = (reverse) ? y : n;
	return (n);
}

static char			*dup_loop(char **dst, char *src, char *sep)
{
	unsigned int	i;

	i = 0;
	while (*src && (i = count(src, sep, 1)) < 1)
		src++;
	*dst = ft_strndup(src, i);
	if (*dst)
		return (&src[i]);
	return (NULL);
}

static char			*clean_start(char const *src, char *sep)
{
	int		y;
	int		x;

	y = -1;
	while (src[++y])
	{
		x = -1;
		while (sep[++x] && src[y] != sep[x])
			;
		if (sep[x] != src[y])
			return (&((char *)src)[y]);
		y++;
	}
	return (NULL);
}

char				**explode(char const *src, char *sep)
{
	char	*start;
	int		i;
	char	*clone;
	char	**tab;
	int		len;

	clone = NULL;
	if (!sep || !sep || !*sep || !*src
		|| !(clone = clean_start(src, sep))
		|| !(clone = strdup(clone))
		|| !(len = count(clone, sep, 0) + 2)
		|| !(tab = (char **)malloc(sizeof(char *) * len)))
	{
		if (clone)
			free(clone);
		return (NULL);
	}
	start = clone;
	ft_bzero(tab, sizeof(char *) * len);
	i = -1;
	while (clone && *clone)
		clone = dup_loop(&tab[++i], clone, sep);
	if (start)
		free(start);
	return (tab);
}
