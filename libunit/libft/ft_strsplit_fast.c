/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_fast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 22:12:00 by luperez           #+#    #+#             */
/*   Updated: 2015/03/14 12:59:27 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		prepare(char const *s, char *str, char c)
{
	int		i;
	int		z;

	i = -1;
	z = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (i > 0 && str[i - 1] != '\0')
			{
				++z;
				str[i] = '\0';
			}
			else if (i == 0)
				str[i] = '\0';
		}
		else
			str[i] = s[i];
	}
	if (z == 0 && s[0] != c && s[0] != '\0')
		z = 1;
	return (z);
}

static	char	**execute(int z, char *str)
{
	int		i;
	char	*hook;
	char	**tabinator;

	tabinator = (char **)malloc(sizeof(char) * (z + 1));
	if (tabinator == NULL)
		return (NULL);
	if (z < 1)
	{
		free(str);
		tabinator[0] = NULL;
		return (tabinator);
	}
	i = -1;
	hook = str;
	while (++i < z)
	{
		str = ft_next_str(str);
		tabinator[i] = str;
		str = ft_end_str(str);
	}
	tabinator[i] = NULL;
	free(hook);
	return (tabinator);
}

char			**ft_strsplit_fast(char const *s, char c)
{
	int		z;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	z = prepare(s, str, c);
	return (execute(z, str));
}
