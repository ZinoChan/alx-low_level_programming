#!/bin/bash

echo "Expected value:"
echo "14"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89  mains/2-main.c 2-strlen_recursion.c -o 2-strlen_recursion; then
    echo -e "\n"
    echo "Your output: "
    ./2-strlen_recursion
else
    echo "Compilation failed"
fi
