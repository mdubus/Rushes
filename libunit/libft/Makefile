NAME = libft.a
SRC = main.c
LIBFT = destroy_tab_str.c strnpbrk.c ft_strcdup_loop.c ft_strcdup.c ft_count_str_occur.c ft_count_c_occur.c explode.c implode.c file_get_content.c get_next_line.c ft_error.c ft_error_mem.c ft_iswhite.c ft_s_strlen.c newstr.c strpush.c strput.c delstr.c ft_strreplace.c lst_create.c ft_lstpush.c ft_print_errno.c ft_putcharerrno.c ft_putstrerrno.c ft_putnbrerrno.c ft_swap.c ft_strconcat.c ft_strtriconcat.c ft_concator.c ft_next_str.c ft_end_str.c ft_unite.c ft_positive.c ft_lstmap.c ft_lstiter.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstnew.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_unsigned_itoa.c ft_itoa.c ft_strsplit.c ft_strsplit_fast.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c ft_strequ.c ft_strmap.c ft_strmapi.c ft_striteri.c ft_striter.c ft_strclr.c ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c ft_atoi.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putnbr.c ft_strchr.c ft_strlcat.c ft_strccpy.c ft_strncpy.c ft_bzero.c ft_memcmp.c ft_strcmp.c ft_strncmp.c ft_memset.c ft_putnstr.c ft_putstr.c ft_strcpy.c ft_linelen.c ft_nbrlen.c ft_strlen.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_memccpy.c ft_memcpy.c ft_putchar.c ft_strcat.c ft_strndup.c ft_strdup.c ft_strncat.c ft_putendl.c
OBJ = $(LIBFT:.c=.o)
FLG = -Wall -Wextra -Werror
INC = -I includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(LIBFT)
	gcc $(FLG) $(INC) -c $(LIBFT)

clean:
	@rm -f $(OBJ) $(OBJTRY)

fclean:
	@make clean
	rm -f $(NAME) $(NAMETRY)

re: fclean all

debug: fclean
	cc $(FLG) $(INC) -c $(LIBFT)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all NAME unit_test libft clean fclean re
