NAME = cpp01
CC = clang++
# FLAGS = -Wall -Wextra -Werror
FLAGS = 
SRC = Contact.cpp phone_book.cpp
OBJ = Contact.o phone_book.o
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