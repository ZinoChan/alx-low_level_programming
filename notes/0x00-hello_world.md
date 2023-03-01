### gcc -Wall -Werror -Wextra -pedantic -std=gnu89

gcc is a compiler for C language the rest are command-line options that can be passed to gcc to enable a high level of warning messages, enforce strict C language standards, and treat warnings as errors:

- `-Wall`: Enables all warnings.
- `-Werror`: Treats warnings as errors.
- `-Wextra`: Enables extra warnings that are not enabled by `-Wall`
- `-pedantic`: Ensures strict ISO C compliance
  > follows the rules and requirements set out in the ISO C standard
- `-std=gnu89`: instructs the compiler to use the GNU C89 dialect of the C language standard

### stdout

In C, the standard output stream (stdout) is a pre-defined output stream that represents the default output device of the program. When a C program writes to `stdout`, the output is typically displayed on the console or terminal where the program is running.

### Puts

`puts` function takes an argument string and writes it to `stdout`, followed by a newline character (\n).

```
#include <stdio.h>

int main(void)
{
    char str[] = "Hello World";
    puts(str);
    return 0;
}
```

### Format specifiers

- `%d`: Print an integer value in decimal format.
- `%f`: Print a floating-point value in decimal format.
- `%s`: Print a null-terminated string.
- `%c`: Print a single character.
- `%p`: Print a pointer value in hexadecimal format.
- `%x`: Print an integer value in hexadecimal format.
- `%o`: Print an integer value in octal format.
- `%e`: Print a floating-point value in scientific notation.

### Printf

`printf` is used to format and print data to `stdout`
The first argument to printf is a format string that specifies the format of the output. The format string can include format specifiers.

```
#include <stdio.h>

int main() {
    int x = 42;
    printf("The value of x is %d\n", x);
    return 0;
}

```

### Assembly code syntax

`-masm=intel` is a command-line option for the GCC, it tells GCC to use Intel syntax for the assembly code.

Intel syntax is used by the x86 family of processors and is characterized by its use of mnemonics to represent machine instructions and its use of an operand order that matches the order of the corresponding instructions.

the default syntax for the generated assembly code in GCC is AT&T syntax.

### The standard error

`stderr` used to output error messages and diagnostic information from a program.

you can use the stderr stream to output error messages and diagnostic information by calling the fprintf function with stderr as the first argument.

```
#include <stdio.h>

int main() {
    fprintf(stderr, "Error: file not found\n");
    return 1;
}
```

### Write

the `write` function is a low-level I/O function that is used to write data from a buffer to a file discriptor. It is defined in the `unistd.h` header file.

#### The write function takes three arguments:

1- `int fd` : The file descriptor to which the data is written. The file descriptor must be open and writeable.
2- `const void *buf` : A pointer to the buffer containing the data to be written.
3- `size_t count` : The number of bytes to be written.

#### File descriptor number

integers that are used by the operating system to keep track of open files and I/O operations. By convention, the file descriptor numbers `0`, `1`, and `2` are reserved for `the standard input`, `standard output`, and `standard error` streams, respectively.

when you open a file or perform an I/O operation in C, the operating system assigns a file descriptor number to the file or stream, and you can use this number to read from or write to the file or stream.

```
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "Hello, World", 14);
	return (1);
}

```

2 is the file descriptor number for `stderr`. This means that the data "Hello, World" will be written to the standard error output.
"hello world" is a string literal containing the data to be written.
14 is the number of bytes to be written, which is the length of the string including the terminating null character.
