#!/bin/bash

echo "Expected value:"
echo "I
will
show you
how
great
I
am" 

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/100-main.c 100-argstostr.c -o args; then
    echo -e "\n"
    echo "Your output: "
    ./args I will "show you" how great I am
    ./args
else
    echo "Compilation failed"
fi
