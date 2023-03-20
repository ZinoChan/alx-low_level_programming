#!/bin/bash

echo "Expected value:"
echo "30171.855"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c -o b; then
    echo -e "\n"
    echo "Your output: "
    ./b
else
    echo "Compilation failed"
fi
