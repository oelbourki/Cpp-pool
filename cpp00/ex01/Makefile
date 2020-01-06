NAME = cpp01
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = contact.cpp phone_book.cpp
OBJ = contact.o phone_book.o
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

$(OBJ):
	$(CC) -c $(FLAGS) $(SRC)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all