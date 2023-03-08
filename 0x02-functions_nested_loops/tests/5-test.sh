#!/bin/bash

echo "Expected value:"
echo "+, 1
0, 0
+, 1
-, /"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/5-main.c 5-sign.c -o 5-sign; then
    echo -e "\n"
    echo "Your output: "
    ./5-sign
else
    echo "Compilation failed"
fi
