# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 19:14:14 by chenlee           #+#    #+#              #
#    Updated: 2023/02/25 19:21:41 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Harl

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
SRC			=	Harl.cpp

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
			@rm $(NAME)

re:				fclean all