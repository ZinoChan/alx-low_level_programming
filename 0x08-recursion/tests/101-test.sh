echo "Expected value:"
echo "1
1
1
1
1
1
1
0
1
1
0
0"

if gcc -Wall -pedantic -Werror -Wextra -std=gnu89 mains/101-main.c 101-wildcmp.c -o 101-wildcmp; then
    echo -e "\n"
    echo "Your output: "
    ./101-wildcmp
else
    echo "Compilation failed"
fi
