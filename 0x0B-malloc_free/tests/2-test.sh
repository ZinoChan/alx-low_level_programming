#!/bin/bash

echo "Expected value:"
echo "Betty Holberton$"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-str_concat.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c | cat -e
else
    echo "Compilation failed"
fi
