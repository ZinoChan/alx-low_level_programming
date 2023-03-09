#!/bin/bash

echo "Expected value:"
echo "0
0
0
1
0
0
1
1"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/6-main.c 6-is_prime_number.c -o 6-prime; then
    echo -e "\n"
    echo "Your output: "
    ./6-prime
else
    echo "Compilation failed"
fi
