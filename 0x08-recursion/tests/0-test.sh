#!/bin/bash

echo "Expected value:"
echo "Puts with recursion"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/0-main.c 0-puts_recursion.c -o 0-puts_recursion; then
    echo -e "\n"
    echo "Your output: "
    ./0-puts_recursion
else
    echo "Compilation failed"
fi
