#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

EXPECTED_OUTPUT="0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024"

echo -e "${GREEN}Expected value:${NC}"
echo "$EXPECTED_OUTPUT"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j; then
    echo -e "\n"
    echo -e "${GREEN}Your output:${NC}"
    ACTUAL_OUTPUT=$(./d)
    echo "$ACTUAL_OUTPUT"

    echo -e "\n"
    echo -e "${GREEN}Comparing outputs...${NC}"
    if [ "$EXPECTED_OUTPUT" == "$ACTUAL_OUTPUT" ]; then
        echo -e "${GREEN}Test passed. Outputs are identical.${NC}"
    else
        echo -e "${RED}Test failed. Outputs differ.${NC}"
        echo "Differences:"
        diff <(echo "$EXPECTED_OUTPUT") <(echo "$ACTUAL_OUTPUT")
    fi
else
    echo -e "${RED}Compilation failed${NC}"
fi
