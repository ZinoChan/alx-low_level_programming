#!/bin/bash

echo "Expected value:"
echo "Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-strncat.c -o 1-strncat; then
    echo -e "\n"
    echo "Your output: "
    ./1-strncat
else
    echo "Compilation failed"
fi
