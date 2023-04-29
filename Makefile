NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT = libft/libft.a 

PRINTF = ft_printf/libftprintf.a

SRC =	big_sorting.c\
		check_errors.c\
		extra_sorting.c\
		handle_stack.c\
		main.c\
		operations1.c\
		operations2.c\
		operations3.c\
		operations4.c\
		three_sorting.c\
		utils.c\
		utils1.c\
		
OBJS = $(SRC:.c=.o) 

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT) $(PRINTF) 	
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	@make -C libft

$(PRINTF):
	@make -C ft_printf

clean :
	@rm -f $(OBJS)
	@make clean -C libft 
	@make clean -C ft_printf 

fclean : clean
	@make fclean -C libft 
	@make fclean -C ft_printf
	@rm -f $(NAME)

re : fclean all