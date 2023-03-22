#!/bin/bash

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc; then
    echo "Test 1: "
    echo "Expected output: "
    echo "2"
    echo -e "\n"
    echo "Your output: "
    ./calc 1 + 1
    echo -e "\n"
    echo "Test 2: "
    echo "Expected output: "
    echo "98"
    echo -e "\n"
    echo "Your output: "
    ./calc 97 + 1
    echo -e "\n"
    echo "Test 3: "
    echo "Expected output: "
    echo "Error"
    echo -e "\n"
    echo "Your output: "
    ./calc 1024 '\*' 98
    echo -e "\n"
    echo "Test 4: "
    echo "Expected output: "
    echo "44"
    echo -e "\n"
    echo "Your output: "
    ./calc 1024 '%' 98
else
    echo "Compilation failed"
fi
