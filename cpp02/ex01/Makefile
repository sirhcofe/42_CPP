# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 17:58:27 by chenlee           #+#    #+#              #
#    Updated: 2023/05/02 18:00:59 by chenlee          ###   ########.fr        #
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