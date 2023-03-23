#!/bin/bash

echo "Expected value:"
echo "B, 3, stSchool"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-print_all.c -o d; then
    echo -e "\n"
    echo "Your output: "
    ./d
else
    echo "Compilation failed"
fi
