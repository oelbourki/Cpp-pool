NAME = serial
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp
OBJ = main.o
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
