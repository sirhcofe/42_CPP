# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 16:01:40 by chenlee           #+#    #+#              #
#    Updated: 2023/02/20 20:21:10 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook

CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic

OBJS_DIR	=	objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
SRC			=	Contact.cpp		\
				PhoneBook.cpp

all:			$(NAME)

$(NAME):		main.cpp $(OBJS)
			@echo "Compiling: main.cpp"
			$(CC) $(FLAGS) main.cpp $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:	%.cpp
			mkdir -p $(OBJS_DIR)
			@echo "Compiling: $<"
			$(CC) $(FLAGS) -c $< -o $@

clean:
			rm -rf objects

fclean:			clean
			rm $(NAME)

re:				fclean all