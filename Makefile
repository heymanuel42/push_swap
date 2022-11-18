

NAME		= push_swap
SRC			= main.c \
				sort/max_op.c sort/min_op.c sort/algo.c\
				commands/commands.c commands/commands_utils.c\
				

LIBFT		= libft/libft.a

all: $(LIBFT)
	gcc $(SRC) $(LIBFT) -o $(NAME);

$(LIBFT):
	make -C libft/

clean:
	make -C libft/ clean

fclean:
	make -C libft/ fclean

re:
	make -C libft/ re

.PHONY: clean fclean  re all