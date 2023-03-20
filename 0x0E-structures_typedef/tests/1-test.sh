#!/bin/bash

echo "Expected value:"
echo "My name is Sadaharu, and I am 3.5 :) - Woof!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-init_dog.c -o b; then
    echo -e "\n"
    echo "Your output: "
    ./b
else
    echo "Compilation failed"
fi
