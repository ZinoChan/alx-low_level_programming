#!/bin/bash

echo "Expected value:"
echo "1122"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c -o e; then
    echo -e "\n"
    echo "Your output: "
    ./e
else
    echo "Compilation failed"
fi
