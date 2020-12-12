# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 16:48:06 by nepage-l          #+#    #+#              #
#    Updated: 2020/12/05 14:44:36 by nepage-l         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	seria

SRCS	=	main.cpp 

CC		=	clang++

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
