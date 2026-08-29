# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/30 15:02:33 by tomswb            #+#    #+#              #
#    Updated: 2026/08/29 17:14:06 by tomswb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c 

		
CC = gcc

CFLAGS = -Wall -Werror -Wextra -I libft.h

OBJECTS = $({SOURCES}:.c=.o)

AR = ar -rcs

RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJECTS}
		${AR} ${NAME} ${OBJECTS}

clean: ${RM} ${OBECTS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY all clean fclean re
