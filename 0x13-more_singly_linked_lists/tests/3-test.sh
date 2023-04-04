#!/bin/bash

echo "Expected value:"
echo "0
1
2
3
4
98
402
1024"

if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d; then
    echo -e "\n"
    echo "Your output: "
    ./d
else
    echo "Compilation failed"
fi