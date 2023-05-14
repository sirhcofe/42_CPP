# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 16:42:59 by chenlee           #+#    #+#              #
#    Updated: 2023/05/14 16:53:39 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ClapTrap

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:			$(NAME)

$(NAME):		main.cpp ClapTrap.o
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) main.cpp ClapTrap.o -o $(NAME)
	
ClapTrap.o:		ClapTrap.cpp
			@echo "Compiling: $<"
			@$(CC) $(FLAGS) -c $< -o $@

clean:
			@rm -rf ClapTrap.o

fclean:			clean
			@rm -rf $(NAME)

re:				fclean all