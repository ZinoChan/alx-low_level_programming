#!/bin/bash

echo "Expected value:"
echo "1
1
65536
25
-1
-125"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 4-pow_recursion.c -o 4-pow; then
    echo -e "\n"
    echo "Your output: "
    ./4-pow
else
    echo "Compilation failed"
fi
