COMPILER = cc
FLAGS = -Wall -Wextra -Werror -fsanitize=address -g
SRC = main.c utils.c

all:
	$(COMPILER) $(FLAGS) $(SRC)
