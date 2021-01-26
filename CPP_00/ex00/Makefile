# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 09:12:49 by odhazzar          #+#    #+#              #
#    Updated: 2020/11/24 09:12:50 by odhazzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

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