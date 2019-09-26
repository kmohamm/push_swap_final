# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:40:20 by atitus            #+#    #+#              #
#    Updated: 2019/09/16 14:29:39 by kmohamma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap.a

SRC = check_num.c \
	delete_node.c \
	get_next_line.c \
	is_sorted.c \
	is_valid.c \
	print.c \
	push_swap.c \
	push.c \
	store_instructions.c \
	swap.c \
	funcs.c

	  
SRCO = check_num.o \
	delete_node.o \
	get_next_line.o \
	is_sorted.o \
	is_valid.o \
	print.o \
	push_swap.o \
	push.o \
	store_instructions.o \
	swap.o \
	funcs.o


	  
CFLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc -c -g $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(SRCO)
	@ranlib $(NAME)
	@gcc checker.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc push_swap_main.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o push_swap
clean:
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(NAME)
	@rm checker push_swap

re : fclean all
