#!/bin/bash

echo "Expected value:"
echo "1110"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/4-main.c 4-isalpha.c -o 4-isalpha; then
    echo -e "\n"
    echo "Your output: "
    ./4-isalpha
else
    echo "Compilation failed"
fi

