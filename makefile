CC=cc
FLAGS=-Wall -Werror -Wextra
INCLUDES=
SRCS=render.c so_long.c map_checker.c map_checker2.c mouvements.c supplies.c
SRCSB=render_bonus.c so_long_bonus.c map_checker_bonus.c map_checker2_bonus.c mouvements_bonus.c mouvements_utils_bonus.c supplies_bonus.c
OBJS=$(SRCS:%.c=%.o)
OBJB=$(SRCSB:%.c=%.o)
NAME=so_long
NAMEB=so_long_bonus
LIBFT=./libft/libft.a
PRINTF =./ft_printf/libftprintf.a


all: libs $(NAME)

libs:
	make -C ./libft
	make -C ./ft_printf

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) -lmlx -framework OpenGL -framework AppKit $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

bonus: $(LIBFT) $(OBJB)
	$(CC) $(OBJB) -lmlx -framework OpenGL -framework AppKit $(LIBFT) $(PRINTF) -o $(NAMEB)
clean:
	rm -rf $(OBJS) $(OBJB)
	make -C ./libft clean
	make -C ./ft_printf clean

fclean: clean
	rm -rf $(NAME) $(NAMEB)
	make -C ./libft fclean
	make -C ./ft_printf fclean

re: fclean all