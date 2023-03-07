#!/bin/bash

echo "Expected value:"
echo "llo"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-strchr.c -o 2-strchr; then
    echo -e "\n"
    echo "Your output: "
    ./2-strchr
else
    echo "Compilation failed"
fi

