#!/bin/bash

echo "Expected value:"
echo "$
__$
__________$
$"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/6-main.c 6-print_line.c -o 6-lines; then
    echo -e "\n"
    echo "Your output: "
    ./6-lines | cat -e
else
    echo "Compilation failed"
fi
