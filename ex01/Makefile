# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 18:00:41 by brandebr          #+#    #+#              #
#    Updated: 2024/08/29 15:34:12 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp PhoneBook.cpp
OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

# Compile .o files from .cpp files, ensuring the directory exists
$(OBJ_DIR)%.o: %.cpp Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

# Link the .o files into the final executable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(OBJ_DIR)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

