# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcastil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 16:36:30 by emcastil          #+#    #+#              #
#    Updated: 2024/04/10 16:36:33 by emcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC = main.c

OBJS = $(SRC:.c=.o)

INCLUDE = libftprintf.h

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
