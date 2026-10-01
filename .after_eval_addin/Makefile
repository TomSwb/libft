
NAME = libft.a

PART1 = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c

PART2 = ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c

PART3 = ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

SOURCES = ${PART1} ${PART2} ${PART3}

GNL_DIR = get_next_line

PRINTF_DIR = ft_printf
		
CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJECTS = ${SOURCES:.c=.o}

AR = ar -rcs

RM = rm -f

%.o: %.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME} gnl printf

gnl:
	$(MAKE) -C $(GNL_DIR)

printf:
	$(MAKE) -C $(PRINTF_DIR)

${NAME}: ${OBJECTS}
		${AR} ${NAME} ${OBJECTS}

clean: 
		${RM} ${OBJECTS}
		$(MAKE) -C $(GNL_DIR) clean
		$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
		${RM} ${NAME}
		$(MAKE) -C $(GNL_DIR) fclean
		$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re








%.
clean:

	$(RM) $(OBJS)
	

fclean: clean

	$(RM) $(NAME)
	