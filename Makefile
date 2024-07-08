# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 16:29:37 by yadiaman          #+#    #+#              #
#    Updated: 2024/07/08 21:34:12 by yadiaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

CC = clang

SRC = \
	ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_puthexa.c \
	ft_putptr.c \
	ft_putunsigned.c\

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	ar rcs $(NAME)	$(OBJ)

%.o :%.c
	$(CC) $(FLAGS)	-c $< -o $@


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY : all clean fclean re