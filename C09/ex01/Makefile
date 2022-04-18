# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lolemmen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 11:51:33 by lolemmen          #+#    #+#              #
#    Updated: 2022/03/29 12:07:55 by lolemmen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCSDIR = srcs
INCSDIR = includes

SRCS = \
	  ft_swap.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strlen.c \

OBJS = $(addprefix srcs/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o:
	$(CC) $(FLAGS) -I $(INCSDIR) -c $< -o $(<:.c=.o)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
