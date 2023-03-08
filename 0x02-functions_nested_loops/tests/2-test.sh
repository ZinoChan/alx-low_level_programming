#!/bin/bash

echo "Expected value:"
echo "abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10; then
    echo -e "\n"
    echo "Your output: "
    ./2-alphabet_x10
else
    echo "Compilation failed"
fi
