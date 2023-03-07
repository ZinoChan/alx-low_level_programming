#!/bin/bash

echo "Expected value:"
echo "113, 1016
1214556093, 1137318"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/8-main.c 8-print_diagsums.c -o 8-print_diagsums; then
    echo -e "\n"
    echo "Your output: "
    ./8-print_diagsums
else
    echo "Compilation failed"
fi

