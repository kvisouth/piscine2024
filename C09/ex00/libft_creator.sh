#!/bin/bash

# When compiling a C file, the compiler generate an object file.
# A c files ends with '.c' and an object file ends with '.o'
# Each line will generate a .c file into it's respective .o file
gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_putstr.c  -o ft_putstr.o
gcc -c ft_strcmp.c  -o ft_strcmp.o
gcc -c ft_strlen.c  -o ft_strlen.o
gcc -c ft_swap.c    -o ft_swap.o

# Now that we have all of our needed object files, we need to
# archive them into a library, in order to create our own library.
ar rcs libft.a *.o

# ar : https://en.wikipedia.org/wiki/Ar_(Unix)
# he archiver, also known simply as ar, is a Unix utility that maintains
# groups of files as a single archive file.
# Today, ar is generally used only to create and update static library
# files that the link editor or linker uses and for
# generating .deb packages for the Debian family; it can be used to
# create archives for any purpose, but has been largely replaced by tar
# for purposes other than static libraries.