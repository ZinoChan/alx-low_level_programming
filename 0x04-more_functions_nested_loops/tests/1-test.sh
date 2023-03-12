#!/bin/bash

echo "Expected value:"
echo "0: 1
a: 0"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-isdigit.c -o 1-isdigit; then
    echo -e "\n"
    echo "Your output: "
    ./1-isdigit
else
    echo "Compilation failed"
fi