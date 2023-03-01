### Logical operators

1- `&&` (logical AND): returns true if both operands are true, and false otherwise.

2- `||` (logical OR): returns true if at least one operand is true, and false otherwise.

3- `!` (logical NOT): returns the opposite of the operand's truth value. If the operand is true, it returns false, and if the operand is false, it returns true.

### Relational operators

`==` (equal to) `!=` (not equal to) `>` (greater than) `<` (less than) `>=` (greater than or equal to) `<=` (less than or equal to)

### Variable types

- `int`: stores integer values such as -10, 0, 100, etc. size = 4 bytes.
- `float`: stores floating-point numbers such as 3.14, -1.23, etc. size = 4 bytes.
- `double`: stores floating-point numbers that require more precision than a float, such as 3.141592653589793, -1.23456789, etc. size = 8 bytes.
- `char`: stores a single character such as 'a', 'Z', '0', etc. size = 1 byte.
- `short`: stores integer values that require less memory than an int, such as -32768 to 32767. size = 2 bytes.
- `long`: stores integer values that require more memory than an int, such as -2147483648 to 2147483647 size = 4 bytes.
- `unsigned`: Used to declare integer variables that can only store non-negative values. For example, an unsigned int can store values from 0 to 4294967295.
- `long long`: stores integer values that require even more memory than a long, such as -9223372036854775808 to 9223372036854775807. size = 8 bytes.

### ASCII

In C programming, ASCII character set is used to represent characters using their corresponding ASCII codes.

```
char c = 65;
printf("%c\n", c); // prints "A"

```

#### The ASCII code for numbers

- `i + '0'` : '0' is 48, so if `i` is `0`, then `i + '0'` will evaluate to `48`, which is the ASCII code for the character `'0'`. Similarly, if `i` is `1`, then `i + '0'` will evaluate to `49`, which is the ASCII code for the character `'1'`, and so on.

> this is used to print int values using the putchar function.

in C, a character literal like `'a'` is actually represented as an integer value, corresponding to its ASCII code. In ASCII, the character `'a'` has a value of `97`, and the character `'b'` has a value of `98`. When you add `1` to the integer value of `'a'`, you get `98`, which is the ASCII code for `'b'`.

```
int main(void)
{
	int s = 0;
	while (s < 26)
	{
		putchar(s  + 'a');
		s++;
	}

	putchar('\n');
	return 0;
}
//abcdefghijklmnopqrstuvwxyz

```

### GCC flags -m32 and -m64

The -m32 flag tells the compiler to generate code for a 32-bit architecture, while the -m64 flag tells the compiler to generate code for a 64-bit architecture.

The target architecture affects the size of the data types, the size of the memory address space, and the way that the CPU executes instructions. Programs compiled with the -m32 flag will use 32-bit pointers, which limits the amount of memory that the program can access, whereas programs compiled with the -m64 flag can use 64-bit pointers, which allows them to access a larger amount of memory.

### Last digit of an integer

when a number is divided by 10 will always be the last digit of the number.
so number % 10 will give the last digit of a number.

### Double & single quotes

- Single quotes `(' ')` are used to enclose a single character literal, also known as a character constant.

```
char c = 'a';
```

- Double quotes `(" ")` are used to enclose a string literal, which is a sequence of characters.

```
char str[] = "Hello, world!";
```

- Single quotes cannot enclose empty character, while double quotes can enclose a sequence of characters, which can be empty.

### Putchar

putchar() is a lower-level function that can only print a single character at a time.
