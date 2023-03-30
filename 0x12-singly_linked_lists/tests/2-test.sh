#!/bin/bash

echo "Expected value:"
echo "[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-add_node.c 0-print_list.c -o c; then
    echo -e "\n"
    echo "Your output: "
    ./c
else
    echo "Compilation failed"
fi