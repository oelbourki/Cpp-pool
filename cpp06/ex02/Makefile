NAME = Base
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ = main.o A.o B.o C.o Base.o
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
