#!/bin/bash

echo "Expected value:"
echo "0123456789"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/3-main.c 3-print_numbers.c -o 3-print_numbers; then
    echo -e "\n"
    echo "Your output: "
    ./3-print_numbers | cat -e
else
    echo "Compilation failed"
fi