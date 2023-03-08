#!/bin/bash

echo "Expected value:"
echo "1
0
1
98"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/6-main.c 6-abs.c -o 6-abs; then
    echo -e "\n"
    echo "Your output: "
    ./6-abs
else
    echo "Compilation failed"
fi

