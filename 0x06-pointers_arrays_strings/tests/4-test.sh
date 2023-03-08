#!/bin/bash

echo "Expected value:"
echo "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 4-rev_array.c -o 4-rev_array; then
    echo -e "\n"
    echo "Your output: "
    ./4-rev_array
else
    echo "Compilation failed"
fi

