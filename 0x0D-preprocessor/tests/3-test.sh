#!/bin/bash

echo "Expected value:"
echo "980, 980"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c -o d; then
    echo -e "\n"
    echo "Your output: "
    ./d
else
    echo "Compilation failed"
fi
