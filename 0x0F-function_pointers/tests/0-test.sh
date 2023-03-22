#!/bin/bash

echo "Expected value:"
echo "Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-print_name.c -o a; then
    echo -e "\n"
    echo "Your output: "
    ./a
else
    echo "Compilation failed"
fi
