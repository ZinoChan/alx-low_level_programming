#!/bin/bash

echo "Expected value:"
echo "==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e; then
    echo -e "\n"
    echo "Your output: "
    valgrind ./e
else
    echo "Compilation failed"
fi