# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 15:38:07 by lolemmen          #+#    #+#              #
#    Updated: 2022/03/31 15:00:35 by lolemmen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

RM = rm -f
CC = gcc
FLAGS = -Wall -Werror -Wextra

SRCSDIR = srcs
INCSDIR = includes

SRCS = \
	  ft_atoi.c \
	  ft_putnbr.c \
	  ft_operation.c \
	  ft_putstr.c \
	  ft_add.c \
	  ft_souss.c \
	  ft_divide.c \
	  ft_multiple.c \
	  ft_modulo.c \
	  main.c \

OBJS = $(addprefix srcs/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

.c.o:
	$(CC) $(FLAGS) -I $(INCSDIR) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
