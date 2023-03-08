#!/bin/bash

echo "Expected value:"
echo "98"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/10-main.c 10-add.c -o 10-add; then
    echo -e "\n"
    echo "Your output: "
    ./10-add
else
    echo "Compilation failed"
fi
