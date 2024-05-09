# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emcastil <emcastil@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 13:48:46 by emcastil          #+#    #+#              #
#    Updated: 2024/05/07 13:48:49 by emcastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDES = -Iincludes
SRCS = ft_printf.c \
		./srcs/ft_flag_condition.c \
		./srcs/ft_format_handler.c \
		./srcs/ft_itoa_printf_p.c \
		./srcs/ft_itoa_printf_u.c \
		./srcs/ft_itoa_printf_x.c \
		./srcs/ft_itoa_printf.c \
		./srcs/ft_manage_flags.c \
		./srcs/ft_print_admin.c \
		./srcs/ft_putchar_fd_char.c \

CONVERSIONS =	./conversions/ft_c_conversion.c \
				./conversions/ft_di_conversion.c \
				./conversions/ft_p_conversion.c \
				./conversions/ft_s_conversion.c \
				./conversions/ft_u_conversion.c \
				./conversions/ft_x_conversion.c \

SRC_FILES = $(SRCS) $(CONVERSIONS)
OBJ_FILES = $(SRC_FILES:.c=.o)
NAME = libftprintf.a

all: sub_makefile $(NAME)

sub_makefile:
	@$(MAKE) -C libft

$(NAME): $(OBJ_FILES)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)
	@$(MAKE) -C libft clean

fclean:
	rm -f $(OBJ_FILES) $(NAME)
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re sub_makefile
