#!/bin/bash

echo "Expected value:"
echo "llo, world"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 4-strpbrk.c -o 4-strpbrk; then
    echo -e "\n"
    echo "Your output: "
    ./4-strpbrk 
else
    echo "Compilation failed"
fi
