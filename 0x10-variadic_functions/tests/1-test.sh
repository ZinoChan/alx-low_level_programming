#!/bin/bash

echo "Expected value:"
echo "0, 98, -1024, 402"


if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-print_numbers.c -o b; then
    echo -e "\n"
    echo "Your output: "
    ./b
else
    echo "Compilation failed"
fi
