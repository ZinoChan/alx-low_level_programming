#!/bin/bash

echo "Expected value:"
echo "Hello, Holberton"

if  nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello; then
    echo -e "\n"
    echo "Your output: "
    ./hello 
else
    echo "Compilation failed"
fi