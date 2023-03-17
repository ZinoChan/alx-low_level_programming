#!/bin/bash

echo "Expected value:"
echo "memory address for example:
0x1e39010
0x1e39830
0x7f31f6c19010"


if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/0-main.c 0-malloc_checked.c -o a; then
    echo -e "\n"
    echo "Your output: "
     ./a
else
    echo "Compilation failed"
fi
