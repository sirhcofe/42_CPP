# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 18:04:13 by chenlee           #+#    #+#              #
#    Updated: 2023/02/24 18:24:30 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	War

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
SRC			=	HumanA.cpp	\
				HumanB.cpp	\
				Weapon.cpp

all:			$(NAME)

$(NAME):		main.cpp $(OBJS)
			@echo "Compiling: main.cpp"
			@$(CC) $(FLAGS) -fsanitize=address main.cpp $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:	%.cpp
			mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			@$(CC) $(FLAGS) -c $< -o $@

clean:
			rm -rf objects

fclean:			clean
			rm $(NAME)

re:				fclean all