#!/bin/bash

echo "Expected value:"
echo "1
1
0
1"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/100-main.c 100-is_palindrome.c -o 100-palindrome; then
    echo -e "\n"
    echo "Your output: "
    ./100-palindrome
else
    echo "Compilation failed"
fi
