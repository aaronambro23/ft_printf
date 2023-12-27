# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 16:22:48 by aaambros          #+#    #+#              #
#    Updated: 2023/12/15 16:50:56 by aaambros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
CC = gcc
RM = rm -rf

SRC_FILES = ft_hexa_lowercase.c \
			ft_hexa_uppercase.c \
			ft_printf.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_putpointer.c \
			ft_putunbr.c \
			ft_putchar.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar $(ARFLAGS) $(NAME) $(OBJ_FILES)

clean: 
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus