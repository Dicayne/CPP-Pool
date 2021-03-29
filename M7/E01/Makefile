# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/12 15:05:29 by vmoreau           #+#    #+#              #
#    Updated: 2021/03/12 16:27:11 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRCS = main.cpp

NAME = iter

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