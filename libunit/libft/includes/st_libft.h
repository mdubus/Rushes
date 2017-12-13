/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luperez <luperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 13:18:12 by luperez           #+#    #+#             */
/*   Updated: 2015/01/08 13:19:40 by luperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ST_LIBFT_H
# define ST_LIBFT_H

# include "libft.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_str
{
	char			*str;
	struct s_str	*next;
}					t_str;

#endif
