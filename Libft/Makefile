# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 08:54:44 by ubegona           #+#    #+#              #
#    Updated: 2022/09/02 16:02:31 by ubegona          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS =  main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_strnstr.o ft_atoi.o
# SRCS = main.c	ft_isalpha.c
GCC = gcc -Wall -Werror -Wextra -o libft.a
GCCS = gcc -c -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(OBJS)
	
%.o: %.c	libft.h
	$(GCCS) $<	libft.h
#$< gure leheneng dependentziaren izena da, kasu honetan %.c

clean: 
	rm -f *.o
fclean: 
	rm -f *.o $(NAME)
re : fclean all

.PHONY: all clean fclean re
