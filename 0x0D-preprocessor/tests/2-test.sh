#!/bin/bash

echo "Expected value:"
echo "2-main.c"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi
