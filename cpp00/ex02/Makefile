# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 17:41:05 by chenlee           #+#    #+#              #
#    Updated: 2023/02/22 18:23:08 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Account

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
SRC			=	Account.cpp

all:			$(NAME)

$(NAME):		tests.cpp $(OBJS)
			@echo "Compiling: tests.cpp"
			$(CC) $(FLAGS) tests.cpp $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:	%.cpp
			mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			$(CC) $(FLAGS) -c $< -o $@

clean:
			rm -rf objects

fclean:			clean
			rm $(NAME)

re:				fclean all
