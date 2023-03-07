echo "Expected value:"
echo "rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c mains/7-main.c 7-print_chessboard.c -o 7-print_chessboard; then
    echo -e "\n"
    echo "Your output: "
    ./7-print_chessboard
else
    echo "Compilation failed"
fi
