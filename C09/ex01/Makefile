# https://makefiletutorial.com/
# https://github.com/clemedon/Makefile_tutor

SRC	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCDIR = includes/

AR = ar rcs
CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
RM = rm -rf

# Take the variable SRC (All the files of src)
# Replace their '.c' suffix by '.o'
# This operation is called 'Suffix substitution'
OBJ	= ${SRC:.c=.o}

# "all" is the default rule of every Makefiles
# It will call the NAME target.
all: $(NAME)

# The NAME target will need object files as prerequisite.
# Will do : ar rcs libft.a <all .o files>
# If no .o were created yet, will do the .c.o rule.
$(NAME): $(OBJ)
	$(AR) $@ $(OBJ)

# Will compile our .c files into .o files, using all of our includes located at $(INCDIR)
# Will do : gcc -Wall -Wextra -Werror -c srcs/ft_putchar.c -o srcs/ft_putchar.o -I includes/
# For every files of SRC ofc
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCDIR)

# clean removes all .o files
# Will do : rm -rf *.o
clean:
	$(RM) $(OBJ)

# fclean uses clean + removes libft.a
# Will do : rm -rf *.o && rm -rf libft.a
fclean: clean
	$(RM) $(NAME)

# Deletes all files (fclean) then build the program (all)
re: fclean all