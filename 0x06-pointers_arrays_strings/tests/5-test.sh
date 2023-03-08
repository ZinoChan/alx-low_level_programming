#!/bin/bash

echo "Expected value:"
echo "LOOK UP!
LOOK UP!"



if  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/5-main.c 5-string_toupper.c -o 5-string_toupper; then
    echo -e "\n"
    echo "Your output: "
    ./5-string_toupper
else
    echo "Compilation failed"
fi
