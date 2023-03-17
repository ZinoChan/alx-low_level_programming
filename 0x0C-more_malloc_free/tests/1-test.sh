#!/bin/bash

echo "Expected value:"
echo "Best School"


if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-string_nconcat.c -o 1-string_nconcat; then
    echo -e "\n"
    echo "Your output: "
    ./1-string_nconcat
else
    echo "Compilation failed"
fi
