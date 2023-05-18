#!/bin/bash

# Define some colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

EXPECTED_OUTPUT="All heap blocks were freed -- no leaks are possible"

echo -e "${GREEN}Expected value:${NC}"
echo "$EXPECTED_OUTPUT"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e; then
    echo -e "\n"
    echo -e "${GREEN}Your output:${NC}"
    VALGRIND_OUTPUT=$(valgrind ./e 2>&1)
    echo "$VALGRIND_OUTPUT"
    ACTUAL_OUTPUT=$(echo "$VALGRIND_OUTPUT" | grep 'All heap blocks were freed -- no leaks are possible')

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
