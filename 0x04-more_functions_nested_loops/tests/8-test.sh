#!/bin/bash

echo "Expected value:"
echo "##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/8-main.c 8-print_square.c -o 8-squares; then
    echo -e "\n"
    echo "Your output: "
    ./8-squares
else
    echo "Compilation failed"
fi
