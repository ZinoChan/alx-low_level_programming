#!/bin/bash

echo "Expected value:"
echo "8044"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/7-main.c 7-print_last_digit.c -o 7-last_digit; then
    echo -e "\n"
    echo "Your output: "
    ./7-last_digit
else
    echo "Compilation failed"
fi
