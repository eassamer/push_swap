NAME = push_swap

BONUS = checker

SRCS = main.c utils.c sort.c sort_2.c operations/swap.c operations/rotate.c \
		operations/reverserotate.c operations/push.c utils2.c

SRCS_B = checker.c utils.c sort.c sort_2.c operations/swap.c operations/rotate.c \
		operations/reverserotate.c operations/push.c get_next_line/get_next_line_utils.c \
		get_next_line/get_next_line.c utils2.c

OBJS = $(SRCS.c=.o)

LIB = libft/libft.a

HEADER = push_swap.h

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(LIB) 

bonus :  $(LIB) $(HEADER)
		@gcc $(CFLAGS) $(SRCS_B) $(LIB)  -o $(BONUS)
		@echo -------- sf rah tcompila bonus --------

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
		rm -rf $(BONUS)

re: fclean all

.PHONY: = all re clean fclean