NAME = push_swap

SRCS = main.c utils.c sort.c sort_2.c operations/swap.c operations/rotate.c \
		operations/reverserotate.c operations/push.c 

OBJS = $(SRCS.c=.o)

LIB = libft/libft.a

HEADER = push_swap.h

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(LIB) 

$(NAME): $(SRCS) $(LIB) $(OBJS) $(HEADER)
		@gcc $(CFLAGS) $(SRCS) $(LIB)  -o $@
		@echo -------- sf rah tcompila --------

$(LIB): 
		@make -C libft

clean:
		@make clean -C libft
		@rm -rf $(OBJS)

fclean: clean
		@make fclean -C libft
		rm -rf $(NAME)

re: fclean all

.PHONY: = all re clean fclean