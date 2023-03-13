#!/bin/bash

echo "Expected value:"
echo "ALX SE"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-strdup.c -o s; then
    echo -e "\n"
    echo "Your output: "
    ./s
else
    echo "Compilation failed"
fi
