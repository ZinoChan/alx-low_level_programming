#!/bin/bash

echo "Expected value:"
echo "011"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/3-main.c 3-islower.c -o 3-islower; then
    echo -e "\n"
    echo "Your output: "
    ./3-islower
else
    echo "Compilation failed"
fi

