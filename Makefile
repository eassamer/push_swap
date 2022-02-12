NAME = push_swap

LIB = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(LIB)

$(NAME): main.c $(LIB)
		@gcc $(CFLAGS) main.c utils.c $(LIB) -o $@
		@echo -------- sf rah tcompila --------

$(LIB): 
		@make -C libft

clean:
		@make clean -C libft

fclean: clean
		@make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: = all re clean fclean