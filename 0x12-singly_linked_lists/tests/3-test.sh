#!/bin/bash

echo "Expected value:"
echo "[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/3-main.c 3-add_node_end.c 0-print_list.c -o d; then
    echo -e "\n"
    echo "Your output: "
    ./d
else
    echo "Compilation failed"
fi