#!/bin/bash

echo "Expected value:"
echo "55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14"

if gcc -std=gnu89 100-main_opcodes.c -o main; then
    echo -e "\n"
    echo "Your output: "
    ./main 21

else
    echo "Compilation failed"
fi
