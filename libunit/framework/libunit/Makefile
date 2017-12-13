NAME = libunit.a
LIBUNIT = load_test.c status_to_name.c writers.c
OBJ = $(LIBUNIT:.c=.o)
FLG = -Wall -Wextra -Werror
INC = -I includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ): $(LIBUNIT)
	gcc $(FLG) $(INC) -c $(LIBUNIT)

clean:
	@rm -f $(OBJ)

fclean:
	@make clean
	rm -f $(NAME)

re: fclean all

debug: fclean
	cc $(FLG) $(INC) -c $(LIBUNIT)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all NAME unit_test libunit clean fclean re
