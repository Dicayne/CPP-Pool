# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 11:01:34 by vmoreau           #+#    #+#              #
#    Updated: 2021/03/11 16:41:41 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRCS = main.cpp Scale.cpp set_value.cpp

NAME = convert

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