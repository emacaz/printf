# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcastil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/02 11:22:56 by emcastil          #+#    #+#              #
#    Updated: 2024/05/02 12:36:23 by emcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes
SRC_DIR = srcs
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean:
	rm -f $(OBJ_FILES) $(NAME)

re: fclean all

.PHONY: all clean fclean re
