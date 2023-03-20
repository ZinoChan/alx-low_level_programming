#!/bin/bash

echo "Expected value:"
echo "My name is Poppy, and I am 3.5 :) - Woof!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c -o d; then
    echo -e "\n"
    echo "Your output: "
    ./d
else
    echo "Compilation failed"
fi
