#!/bin/bash

echo "Expected value:"
echo "-15
15
0"

if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-strcmp.c -o 3-strcmp; then
    echo -e "\n"
    echo "Your output: "
    ./3-strcmp
else
    echo "Compilation failed"
fi
