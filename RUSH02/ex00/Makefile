SRC		= src/ft_strcat.c src/ft_write_nbr.c src/main_loop.c src/main.c src/ft_process_file.c src/ft_realloc.c src/ft_get_next_line.c src/ft_strcmp.c src/ft_putstr.c src/ft_atoa.c src/ft_strlen.c src/ft_perror.c src/index.c src/ft_strchr.c src/ft_check_endl.c src/ft_group.c src/ft_strdup.c
SRCDIR	= src/
OBJ		= $(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRC))
OBJDIR	= obj/
INC		= inc/ft_get_next_line.h inc/index.h inc/rush.h
INCDIR	= inc/
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -g
RM		= rm -f

NAME	= rush-02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ): $(OBJDIR)%.o : $(SRCDIR)%.c $(INC) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

$(OBJDIR):
	mkdir -p $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re