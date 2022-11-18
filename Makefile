

NAME		= push_swap
SRC			= main.c algo_utils.c max_op.c min_op.c commands/commands.c\
				commands/commands_utils.c algo.c

LIBFT		= libft/libft.a

all: $(LIBFT)
	cc $(SRC) $(LIBFT) -o $(NAME);

$(LIBFT):
	make -C libft/

clean:
	make -C libft/ clean

fclean:
	make -C libft/ fclean

re:
	make -C libft/ re

.PHONY: clean fclean  re all