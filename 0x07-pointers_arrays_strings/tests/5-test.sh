#!/bin/bash

echo "Expected value:"
echo "world"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/5-main.c 5-strstr.c -o 5-strstr; then
    echo -e "\n"
    echo "Your output: "
    ./5-strstr
else
    echo "Compilation failed"
fi

