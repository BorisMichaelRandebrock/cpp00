# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 13:18:48 by brandebr          #+#    #+#              #
#    Updated: 2024/08/26 17:56:08 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = main.cpp

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -c 

all: Makefile $(NAME)

$(OBJ_DIR)%.o: $(SRC)%.cpp Makefile
	@mkdir -p $(OBJ)
	$(CC) -I -c++ $< -o $@ $(FLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
