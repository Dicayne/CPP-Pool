# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 16:12:16 by vmoreau           #+#    #+#              #
#    Updated: 2021/01/11 11:54:09 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRCS = test.cpp Account.class.cpp

NAME = Account

CFLAGS = -g3 -fsanitize=address -Wall -Wextra -Werror

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