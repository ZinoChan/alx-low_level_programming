#!/bin/bash

echo "Expected value:"
echo "reklaW notloC"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion; then
    echo -e "\n"
    echo "Your output: "
    ./1-print_rev_recursion
else
    echo "Compilation failed"
fi
