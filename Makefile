NAME = pushswap

SRC = main.c utils.c push_fcts.c swap_fcts.c rotate_fcts.c rrotate_fcts.c error_check.c merge_fcts.c merge_fcts1.c merge_fcts2.c interror_check.c merge_split.c setup.c
OBJ = $(SRC:.c=.o)

CC = gcc -Wall -Wextra -Werror -g
INCLUDE = -I includes -I libft

LIBFT = libft/libft.a

all : $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L libft -lft -o $(NAME)

$(LIBFT) :
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(INLCUDE) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C libft fclean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
