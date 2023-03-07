#!/bin/bash

echo "Expected value:"
echo "5"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-strspn.c -o 3-strspn; then
    echo -e "\n"
    echo "Your output: "
    ./3-strspn
else
    echo "Compilation failed"
fi
