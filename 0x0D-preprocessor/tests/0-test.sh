#!/bin/bash

echo "Expected value:"
echo "1122"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c -o a ; then
    echo -e "\n"
    echo "Your output: "
    ./a
else
    echo "Compilation failed"
fi
