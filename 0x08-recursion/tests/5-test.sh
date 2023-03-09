#!/bin/bash

echo "Expected value:"
echo "1
32
4
-1
5
-1"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/5-main.c 5-sqrt_recursion.c -o 5-sqrt; then
    echo -e "\n"
    echo "Your output: "
    ./5-sqrt
else
    echo "Compilation failed"
fi
