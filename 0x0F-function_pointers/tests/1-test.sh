#!/bin/bash

echo "Expected value:"
echo "0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/1-main.c 1-array_iterator.c -o b; then
    echo -e "\n"
    echo "Your output: "
    ./b
else
    echo "Compilation failed"
fi
