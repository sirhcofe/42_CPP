# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 16:01:43 by chenlee           #+#    #+#              #
#    Updated: 2023/02/15 16:01:44 by chenlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

FLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

OBJS	=	$(SRC:.cpp=.o)
SRC		=	megaphone.cpp

all:		$(NAME)

$(NAME):	$(OBJS)
		@c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o:		%.cpp
		@c++ $(FLAGS) -c $< -o $@

clean:
		@rm $(OBJS)

fclean:		clean
		@rm $(NAME)

re:			fclean all