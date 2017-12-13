NAME = tester
SRC = main.c
OBJ = $(SRC:.c=.o)
TEST_PATH_SRC := $(shell find . -mindepth 2)
TEST_SRC := $(shell find . -mindepth 2 | xargs -n 1 basename)
TEST_OBJ = $(TEST_SRC:.c=.o)
FLG = -Wall -Wextra -Werror -g3 -O3
INC = -I ../framework/libunit/includes/ -I ../libft/includes/
LIB = -L ../framework/libunit/ -lunit -L ../libft/ -lft
RED = \033[0;31m
GREEN = \033[1;32m
BLUE = \033[0;34m
CYAN = \033[0;36m
CYAN_L = \033[1;36m
NC = \033[0m

$(NAME): $(OBJ)
	make -C ../framework/libunit
	make -C ../libft
	gcc $(FLG) $(INC) -c $(SRC) $(TEST_PATH_SRC)
	gcc -o $(NAME) $(OBJ) $(TEST_OBJ) $(LIB)
	@echo "$(GREEN)== End of compilation ==$(NC)"

all: $(NAME)

$(OBJ): $(SRC) $(TEST_PATH_SRC)
	@echo "$(GREEN)== Make ==$(PURPLE)"
	gcc $(FLG) $(INC) -c $(SRC) $(TEST_PATH_SRC)

clean:
	@echo "\n    $(GREEN)== Clean ==$(CYAN)"
	@echo "      - rm all libft/.o"
	@make -C ../framework/libunit clean
	@make -C ../libft clean
	@rm -f $(OBJ) $(TEST_OBJ)
	@echo "      - rm all .o"
	@echo "    $(GREEN)== End of clean ==$(NC)"

fclean:
	@echo "\n$(GREEN)== Fclean ==$(CYAN_L)"
	make clean
	@echo "$(CYAN_L)"
	make -C ../framework/libunit fclean
	make -C ../libft fclean
	rm -f $(NAME)
	@echo "$(GREEN)== End of fclean ==$(NC)\n"

re: fclean all

debug: fclean
	@echo "\n$(GREEN)== Debug ==$(PURPLE)"
	make -C ../framework/libunit
	make -C ../libft
	cc $(FLG) $(INC) -c -g $(SRC) $(TEST_PATH_SRC)
	cc -o $(NAME) $(OBJ) $(TEST_OBJ) $(LIB)
	@echo "$(GREEN)== End of compilation ==$(NC)\n"

leacks:
	while (test 42) do clear; leaks $(NAME); sleep 5; done

test: $(NAME)
	./$(NAME)

.PHONY: $(NAME) all clean debug fclean leacks re
