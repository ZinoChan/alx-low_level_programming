#!/bin/bash

echo "Expected value:"
echo "2
1
2"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-int_index.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi
