# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 16:48:06 by nepage-l          #+#    #+#              #
#    Updated: 2020/02/21 20:07:33 by nepage-l         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	=	replace

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
