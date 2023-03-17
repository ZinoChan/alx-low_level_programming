#!/bin/bash

echo "Expected value:"
echo "980"


if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-mul.c -o 101-mul; then
    echo -e "\n"
    echo "Your output: "
    ./101-mul 10 98
else
    echo "Compilation failed"
fi
