NAME = replace
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = replace.cpp
OBJ = replace.o
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC)

clean:
	rm -rf $(OBJ)
fclean: clean
# check *.replace
	rm -rf $(NAME) *.replace
re: fclean all
