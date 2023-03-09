#!/bin/bash

echo "Expected value:"
echo "100352
-1646592"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-mul.c -o 2-mul; then
    echo -e "\n"
    echo "Your output: "
    ./2-mul
else
    echo "Compilation failed"
fi