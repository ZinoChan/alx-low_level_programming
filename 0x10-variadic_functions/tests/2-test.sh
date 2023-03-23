#!/bin/bash

echo "Expected value:"
echo "Jay, Django"


if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-print_strings.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi
