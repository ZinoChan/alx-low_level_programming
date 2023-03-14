#!/bin/bash

echo "Expected value:"
echo "0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-alloc_grid.c -o g; then
    echo -e "\n"
    echo "Your output: "
    ./g
else
    echo "Compilation failed"
fi
