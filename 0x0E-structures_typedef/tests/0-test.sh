#!/bin/bash

echo "Expected value:"
echo "My name is Poppy, and I am 3.5 :) - Woof!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c -o a; then
    echo -e "\n"
    echo "Your output: "
    ./a
else
    echo "Compilation failed"
fi
