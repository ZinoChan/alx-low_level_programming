#!/bin/bash

echo "Expected value:"
echo "A: 1
a: 0"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-isupper.c -o 0-isuper; then
    echo -e "\n"
    echo "Your output: "
    ./0-isuper
else
    echo "Compilation failed"
fi