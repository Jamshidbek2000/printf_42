# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 16:17:26 by jergashe          #+#    #+#              #
#    Updated: 2022/11/20 12:17:19 by jergashe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This is a Makefile which can 
# compile (make all)
# recompile (make re)
# delete object files (make clean)
# delete object files and execuatable (make fclean)

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRC =	ft_printf.c \
		./print_functions/ft_print_char.c \
		./print_functions/ft_print_str.c \
		./print_functions/ft_print_hex.c \
		./print_functions/ft_print_address.c \
		./print_functions/ft_print_dec.c \
		./print_functions/ft_print_unsigned.c \
		./shared_functions/get_len_num.c

SRCLIBFT =	./libft/ft_putchar_fd.c \
			./libft/ft_putnbr_fd.c \
			./libft/ft_strlen.c \
			./libft/ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

OBJLIBFT = $(SRCLIBFT:.c=.o)

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIBFT)
	ar -rcs $(NAME) $(OBJ) $(OBJLIBFT)

clean:
	rm -f $(OBJ) $(OBJLIBFT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re