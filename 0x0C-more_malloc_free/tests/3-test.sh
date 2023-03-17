#!/bin/bash

echo "Expected value:"
echo "0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
0x0a"


if   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-array_range.c -o 3-array_range; then
    echo -e "\n"
    echo "Your output: "
    ./3-array_range
else
    echo "Compilation failed"
fi
