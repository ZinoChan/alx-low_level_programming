#!/bin/bash

echo "Expected value:"
echo "-> 2 elements"

if   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-listint_len.c -o b; then
    echo -e "\n"
    echo "Your output: "
    ./b
else
    echo "Compilation failed"
fi