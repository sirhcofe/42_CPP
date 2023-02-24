# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 16:51:47 by chenlee           #+#    #+#              #
#    Updated: 2023/02/24 17:03:30 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		main.cpp
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) main.cpp -o $(NAME)

clean:

fclean:			clean
			@rm $(NAME)

re:				fclean all