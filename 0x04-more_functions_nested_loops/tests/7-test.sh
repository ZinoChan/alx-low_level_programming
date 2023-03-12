#!/bin/bash

echo "Expected value:"
echo "$
\\$
 \\$
\\$
 \\$
  \\$
   \\$
    \\$
     \\$
      \\$
       \\$
        \\$
         \\$
$"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/7-main.c 7-print_diagonal.c -o 7-diagonals; then
    echo -e "\n"
    echo "Your output: "
    ./7-diagonals | cat -e
else
    echo "Compilation failed"
fi
