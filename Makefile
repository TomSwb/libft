# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/30 15:02:33 by tomswb            #+#    #+#              #
#    Updated: 2026/07/30 16:58:45 by tomswb           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lbft.a

SOURCES = ft_isalpha.c \
		ft_isdigit.c 

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