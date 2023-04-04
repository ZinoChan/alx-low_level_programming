#!/bin/bash

echo "Expected value:"
echo "1024
402
98
4
3
2
1
0"

if   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-add_nodeint.c 0-print_listint.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi