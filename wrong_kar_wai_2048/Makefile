# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdubus <mdubus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/06 10:05:28 by mdubus            #+#    #+#              #
#    Updated: 2018/01/07 19:00:34 by mdubus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	clang
NAME		=	game_2048
FLAGS		=	-Wall -Wextra -Werror

LIBDIR		=	libft
LIBLINK		=	-L $(LIBDIR) -lft
LIB 		=	$(LIBDIR)/libft.a

INCLUDES	= 	-I ./includes
INCLUDE_DIR	=	./includes
INCLUDE		=	./includes/rush.h

OBJDIR		=	objs
SRCDIR		=	srcs
SRC			=	main.c print.c init.c print_board.c move_left.c move_right.c\
				move_up.c move_down.c move.c random_number.c is_win.c\
				check_if_loose.c game_over.c check_if_full.c init_tab.c\
				reload_game.c menu.c search_for_max.c

OBJ			= $(SRC:.c=.o)
SRCS		=	$(addprefix $(SRCDIR)/, $(SRC))
OBJS		=	$(addprefix $(OBJDIR)/, $(SRC:.c=.o))


all: directory $(NAME)

$(NAME): $(OBJDIR) $(LIB) $(OBJS) $(INCLUDE)
	reset
	@$(CC) $(FLAGS) -o $@ $(OBJS) $(LIBLINK) -lncurses

$(LIB):
	@make -C $(LIBDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCLUDE)
	@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

directory: $(OBJDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJS)
	@make -C $(LIBDIR) clean
	@rm -rf $(OBJDIR)
fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBDIR) fclean

re: fclean all

.PHONY: clean all re fclean directory
