#!/bin/bash

echo "Expected value:"
echo "00:00
00:01
.
.
.
23:58
23:59"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/8-main.c 8-24_hours.c -o 8-24; then
    echo -e "\n"
    echo "Your output: "
    ./8-24
else
    echo "Compilation failed"
fi


