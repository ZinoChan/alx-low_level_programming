#!/bin/bash

echo "Expected value:"
echo "ALX$
School$
#cisfun$"
if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/101-main.c 101-strtow.c -o strtow; then
    echo -e "\n"
    echo "Your output: "
    ./strtow | cat -e
else
    echo "Compilation failed"
fi
