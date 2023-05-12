# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 20:41:03 by chenlee           #+#    #+#              #
#    Updated: 2023/05/08 20:46:10 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Point

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

SRC			=	Fixed.cpp Point.cpp
OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

all:			$(NAME)

$(NAME):		main.cpp $(OBJS)
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) main.cpp $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:	%.cpp
			@mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			@$(CC) $(FLAGS) -c $< -o $@

clean:
			@rm -rf objects

fclean:			clean
			@rm -rf $(NAME)

re:				fclean all
