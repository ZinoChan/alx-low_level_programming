#!/bin/bash

echo "Expected value:"
echo "98
402
1024
0
-98"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/101-main.c 101-print_number.c -o 101-print_numbers; then
    echo -e "\n"
    echo "Your output: "
    ./101-print_numbers
else
    echo "Compilation failed"
fi
