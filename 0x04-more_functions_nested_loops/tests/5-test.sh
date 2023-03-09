#!/bin/bash

echo "Expected value:"
echo "01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/5-main.c 5-more_numbers.c -o 5-more_numbers; then
    echo -e "\n"
    echo "Your output: "
    ./5-more_numbers 
else
    echo "Compilation failed"
fi