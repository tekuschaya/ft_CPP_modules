NAME = whatever

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean: 
	rm -rf $(OBJ)

fclean: 
	rm -rf $(OBJ) $(NAME)

re: fclean all