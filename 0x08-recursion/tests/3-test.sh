#!/bin/bash

echo "Expected value:"
echo "1
120
3628800
-1"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-factorial.c -o 3-factorial; then
    echo -e "\n"
    echo "Your output: "
    ./3-factorial
else
    echo "Compilation failed"
fi
