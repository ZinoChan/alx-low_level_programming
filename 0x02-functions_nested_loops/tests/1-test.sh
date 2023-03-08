#!/bin/bash

echo "Expected value:"
echo "abcdefghijklmnopqrstuvwxyz"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/1-main.c 1-alphabet.c -o 1-alphabet; then
    echo -e "\n"
    echo "Your output: "
    ./1-alphabet
else
    echo "Compilation failed"
fi

