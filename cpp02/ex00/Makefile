# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 19:29:02 by chenlee           #+#    #+#              #
#    Updated: 2023/03/01 19:30:59 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		main.cpp Fixed.cpp

main.cpp:
			@echo "Compiling main.cpp"
			$(CC) $(FLAGS) main.cpp Fixed.cpp -o $(NAME)