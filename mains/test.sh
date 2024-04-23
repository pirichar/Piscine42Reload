#! /bin/sh

gcc -Wall -Werror -Wextra main.c
gcc -Wall -Werror -Wextra ../ex18/ft_print_params.c -o print_params
gcc -Wall -Werror -Wextra ../ex19/ft_sort_params.c -o sort_params
./a.out
rm a.out
rm print_params
rm sort_params