# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/21 13:30:48 by malavaud          #+#    #+#              #
#    Updated: 2025/10/24 12:20:34 by malavaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror

NAME = libftprintf.a

ARCS = -ar rcs

SOURCE = ft_putchar.c \
		ft_putnbr_unsigned.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putptr.c \
		ft_puthex.c \
		ft_printf.c \
	
HEADER = -Ift_printf.h

OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
