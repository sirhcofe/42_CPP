# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 22:13:06 by chenlee           #+#    #+#              #
#    Updated: 2023/02/24 22:26:12 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Replace

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

all:		$(NAME)

$(NAME):	main.cpp
		@echo "Compiling: main.cpp"
		@$(CC) $(FLAGS) main.cpp -o $(NAME)

clean:


fclean:		clean
		@rm $(filter-out main.cpp Makefile, $(wildcard *))

re:			fclean all