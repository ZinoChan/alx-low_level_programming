#!/bin/bash

echo "Expected value:"
echo "01356789"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers; then
    echo -e "\n"
    echo "Your output: "
    ./4-print_most_numbers
else
    echo "Compilation failed"
fi