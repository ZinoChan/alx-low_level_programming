#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

EXPECTED_OUTPUT="1024
402
98
4
3
2
1
0"

echo -e "${GREEN}Expected value:${NC}"
echo "$EXPECTED_OUTPUT"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c; then
    echo -e "\n"
    echo -e "${GREEN}Your output:${NC}"
    ACTUAL_OUTPUT=$(./c)
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
