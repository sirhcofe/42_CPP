# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 19:11:02 by chenlee           #+#    #+#              #
#    Updated: 2023/05/22 20:46:55 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	matingCall

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

HEADER_DIR	=	includes/
HEADERS		=	$(wildcard $(HEADER_DIR)*.hpp)

SRC			=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
OBJS_DIR	=	objects/

all:			$(NAME)

$(NAME):		main.cpp $(OBJS) $(HEADERS)
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) -I$(HEADER_DIR) main.cpp $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:	%.cpp $(HEADERS)
			@mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			@$(CC) $(FLAGS) -I$(HEADER_DIR) -c $< -o $@

clean:
			@rm -rf $(OBJS_DIR)

fclean:			clean
			@rm -rf $(NAME)

re:				fclean all
