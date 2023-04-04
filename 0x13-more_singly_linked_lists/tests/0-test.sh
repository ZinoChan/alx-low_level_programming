#!/bin/bash

echo "Expected value:"
echo "9
8
-> 2 elements"

if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-print_listint.c -o a; then
    echo -e "\n"
    echo "Your output: "
    ./a
else
    echo "Compilation failed"
fi