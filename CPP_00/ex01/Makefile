# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odhazzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 09:17:46 by odhazzar          #+#    #+#              #
#    Updated: 2020/11/24 09:17:47 by odhazzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = clang++

FLAGS = -Wall -Wextra -Werror

HEADER = Contact.hpp

SRC = Phonebook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $<

clean: 
	rm -rf $(OBJ)

fclean: 
	rm -rf $(OBJ) $(NAME)

re: fclean all