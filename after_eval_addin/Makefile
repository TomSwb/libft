



PRINTF_DIR = ft_printf

all: $(NAME) printf

$(NAME): $(OBJS)

	$(AR) $(NAME) $(OBJS)

printf:

	$(MAKE) -C $(PRINTF_DIR)

%.o: %.c

	$(CC) $(CFLAGS) -c $< -o $@

clean:

	$(RM) $(OBJS)
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean

	$(RM) $(NAME)
	$(MAKE) -C $(PRINTF_DIR) fclean