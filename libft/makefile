# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 14:01:05 by kmohamma          #+#    #+#              #
#    Updated: 2019/06/10 15:45:50 by kmohamma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC = ft_isdigit.c \
	  ft_putendl.c \
	  ft_strequ.c \
	  ft_strnew.c \
	  ft_isprint.c \
ft_putendl_fd.c \
ft_striter.c \
ft_strnstr.c \
ft_itoa.c \
ft_putnbr.c \
ft_striteri.c \
ft_strrchr.c \
ft_memalloc.c \
ft_putnbr_fd.c \
ft_strjoin.c \
ft_strsplit.c \
ft_memccpy.c \
ft_putstr.c \
ft_strlcat.c \
ft_strstr.c \
ft_memchr.c \
ft_putstr_fd.c \
ft_strlen.c \
ft_strsub.c \
ft_memcmp.c \
ft_strcat.c \
ft_strmap.c \
ft_strtrim.c \
ft_atoi.c \
ft_memcpy.c \
ft_strchr.c \
ft_strmapi.c \
ft_tolower.c \
ft_bzero.c \
ft_memdel.c \
ft_strclr.c \
ft_strncat.c \
ft_toupper.c \
ft_memmove.c \
ft_strcmp.c \
ft_strncmp.c \
ft_isalnum.c \
ft_memset.c \
ft_strcpy.c \
ft_strncpy.c \
ft_isalpha.c \
ft_putchar.c \
ft_strdel.c \
ft_isascii.c \
ft_putchar_fd.c \
ft_strdup.c \
ft_strnequ.c \

SRCO = ft_isdigit.o \
	  ft_putendl.o \
	  ft_strequ.o \
	  ft_strnew.o \
	  ft_isprint.o \
ft_putendl_fd.o \
ft_striter.o \
ft_strnstr.o \
ft_itoa.o \
ft_putnbr.o \
ft_striteri.o \
ft_strrchr.o \
ft_memalloc.o \
ft_putnbr_fd.o \
ft_strjoin.o \
ft_strsplit.o \
ft_memccpy.o \
ft_putstr.o \
ft_strlcat.o \
ft_strstr.o \
ft_memchr.o \
ft_putstr_fd.o \
ft_strlen.o \
ft_strsub.o \
ft_memcmp.o \
ft_strcat.o \
ft_strmap.o \
ft_strtrim.o \
ft_atoi.o \
ft_memcpy.o \
ft_strchr.o \
ft_strmapi.o \
ft_tolower.o \
ft_bzero.o \
ft_memdel.o \
ft_strclr.o \
ft_strncat.o \
ft_toupper.o \
ft_memmove.o \
ft_strcmp.o \
ft_strncmp.o \
ft_isalnum.o \
ft_memset.o \
ft_strcpy.o \
ft_strncpy.o \
ft_isalpha.o \
ft_putchar.o \
ft_strdel.o \
ft_isascii.o \
ft_putchar_fd.o \
ft_strdup.o \
ft_strnequ.o \

CFLAGS = -Wall -Werror -Wextra

HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
