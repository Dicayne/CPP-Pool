# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 15:25:06 by vmoreau           #+#    #+#              #
#    Updated: 2021/03/17 14:47:03 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRCS = main.cpp

NAME = array

CFLAGS = -Wall -Wextra -Werror --std=c++98

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re clean fclean