# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 08:54:44 by ubegona           #+#    #+#              #
#    Updated: 2022/09/08 08:54:46 by ubegona          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(SRCS:.c=.o)
SRCS = $(wildcard *.c)
AR = ar rcs libft.a
GCCS = gcc -c -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(OBJS)
	
%.o: %.c
	$(GCCS) $<	
#$< gure leheneng dependentziaren izena da, kasu honetan %.c

clean: 
	rm -f *.o
fclean: clean 
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
