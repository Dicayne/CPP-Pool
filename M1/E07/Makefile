# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 18:08:03 by vmoreau           #+#    #+#              #
#    Updated: 2021/01/16 11:32:44 by vmoreau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

SRCS = main.cpp

NAME =	replace

CFLAGS = -Wall -Wextra -Werror

SANI = -g3 -fsanitize=address

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