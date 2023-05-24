# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 16:42:59 by chenlee           #+#    #+#              #
#    Updated: 2023/05/22 18:02:46 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -pedantic

SRC			=	ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
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