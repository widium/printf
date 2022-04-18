# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebennace <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 17:10:18 by ebennace          #+#    #+#              #
#    Updated: 2021/11/09 19:01:00 by ebennace         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_fonction.c\
	   ft_check_format.c \
	   ft_printf.c \
	   ft_hexa.c \

OBJS			= $(SRCS:.c=.o)
FLAGS 			= -Wall -Wextra -Werror -I.
all : 			$(NAME)
$(NAME) : 		$(OBJS)
				ar src  $(NAME) $(OBJS)
%.o: %.c
				gcc -c $(FLAGS) -o $@ $^

clean :
				/bin/rm -rf *.o

fclean : clean
				/bin/rm -rf $(NAME)

re : fclean all
