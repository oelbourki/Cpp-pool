NAME = what
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = whatever.cpp
OBJ = whatever.o
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
