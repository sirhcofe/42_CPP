# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 14:03:22 by chenlee           #+#    #+#              #
#    Updated: 2023/05/24 17:31:43 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ff42

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

FSANS		=	-fsanitize=address -g3

HEADER_DIR	=	includes/
HEADERS		=	$(wildcard $(HEADER_DIR)*.hpp)

SRC			=	AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
OBJS_DIR	=	objects/

all:			$(NAME)

valgrind:	all
		@rm -rf valgrind-out.txt
		valgrind --leak-check=full  \
		--show-leak-kinds=all       \
		--track-origins=yes         \
		--verbose                   \
		--log-file=valgrind-out.txt \
		./ff42

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
			@rm -rf valgrind-out.txt
			@rm -rf $(NAME)

re:				fclean all
