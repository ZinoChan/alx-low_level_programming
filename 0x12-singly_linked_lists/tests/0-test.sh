#!/bin/bash

echo "Expected value:"
echo "[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements"

if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-print_list.c -o a; then
    echo -e "\n"
    echo "Your output: "
    ./a
else
    echo "Compilation failed"
fi