# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iboiraza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 10:57:59 by iboiraza          #+#    #+#              #
#    Updated: 2024/10/22 12:22:53 by iboiraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= push_swap
RM		= rm -rf

CFILES = push_swap.c ft_error_exit.c ft_split.c init_a_to_b.c init_b_to_a.c \
	sort_big_stacks.c stack_utils.c ft_fill_stack.c main.c ft_push.c \
	ft_reverse_rotate.c ft_rotate.c ft_swap.c min_on_top.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)


clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
