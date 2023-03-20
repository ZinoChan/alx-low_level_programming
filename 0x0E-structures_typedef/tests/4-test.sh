#!/bin/bash

echo "Expected value:"
echo "My name is Poppy, and I am 3.5 :) - Woof!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 4-new_dog.c -o e; then
    echo -e "\n"
    echo "Your output: "
    ./e
else
    echo "Compilation failed"
fi
