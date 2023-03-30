#!/bin/bash

echo "Expected value:"
echo "You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/100-main.c 100-first.c -o first; then
    echo -e "\n"
    echo "Your output: "
    ./first
else
    echo "Compilation failed"
fi