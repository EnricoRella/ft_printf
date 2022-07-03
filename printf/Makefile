# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erella <erella@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 17:36:06 by erella            #+#    #+#              #
#    Updated: 2022/07/01 19:51:16 by erella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putptr.c ft_putstr.c ft_putnbr.c ft_putunbr.c\
	ft_puthex.c    

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re