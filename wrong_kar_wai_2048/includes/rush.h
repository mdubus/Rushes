/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 10:07:48 by mdubus            #+#    #+#             */
/*   Updated: 2018/01/07 19:06:05 by mdubus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include "../libft/includes/libft.h"
# include <ncurses.h>
# include <time.h>

# define SIZE_HEADER 5
# define MAX_SIZE 8
# define ESC 27
# define Q 113
# define R 114
# define M 109

enum			e_const
{
	WIN_VALUE = 2048
};

typedef struct	s_rush
{
	char		*name[SIZE_HEADER];
	int			key;
	int			width_w;
	int			height_w;
	int			size;
	int			size_rect;
	int			tab[MAX_SIZE][MAX_SIZE];
	int			new_nb[2];
	int			random_nb;
	int			random_pos_x;
	int			random_pos_y;
	int			flag_refresh;
	int			score_max;
	bool		win;
	bool		loose;
	bool		moved;
	bool		can_move;
}				t_rush;

/*
** PRINT
*/

void			print_game_name(t_rush rush);
void			print_tab(t_rush rush);
void			print_board(t_rush rush);

/*
** PLAY
*/

int				init(t_rush *rush);
void			init_tab(t_rush *rush);
void			place_random_number(t_rush *rush);
void			win(t_rush *rush);
int				check_if_full(t_rush *rush);
void			check_if_can_move(t_rush *rush);
void			game_over(t_rush rush);
int				check_if_full(t_rush *rush);
void			reload_game(t_rush *rush);
int				menu(t_rush *rush);
void			search_for_max(t_rush *rush);

/*
** MOVE
*/

void			arrow_keys(t_rush *rush);
void			move_left(t_rush *rush);
void			move_right(t_rush *rush);
void			move_up(t_rush *rush);
void			move_down(t_rush *rush);

#endif
