#!/bin/bash

echo "Expected value:"
echo "Name: Poppy
Age: 3.500000
Owner: Bob"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-print_dog.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi
