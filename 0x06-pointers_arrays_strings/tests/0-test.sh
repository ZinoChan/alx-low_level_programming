#!/bin/bash

echo "Expected value:"
echo "Hello 
World!
Hello World!
World!
Hello World!"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-strcat.c -o 0-strcat; then
    echo -e "\n"
    echo "Your output: "
    ./0-strcat
else
    echo "Compilation failed"
fi

