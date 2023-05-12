# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 15:18:38 by chenlee           #+#    #+#              #
#    Updated: 2023/05/08 16:51:26 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		main.cpp Fixed.o
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) main.cpp Fixed.o -o $(NAME)

Fixed.o:		Fixed.cpp
			@echo "Compiling: $<"
			@$(CC) $(FLAGS) -c $< -o $@

clean:
			@rm -rf Fixed.o

fclean:			clean
			@rm -rf $(NAME)

re:				fclean all