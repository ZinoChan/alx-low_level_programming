# C - Variadic functions

In this project, I learned about using variadic functions with the `va_start`,
`va_arg`, and `va_end` macros as well as why and how to use the `const` type qualifier in C.

## Header File :file_folder:

* [variadic_functions.h](./variadic_functions.h): Header file containing definitions and
prototypes for all types and functions written in the project.

| File                     | Definition/Prototype                                                    |
| ------------------------ | ----------------------------------------------------------------------- |
| `0-sum_them_all.c`       | `int sum_them_all(const unsigned int n, ...);`                          |
| `1-print_numbers.c`      | `void print_numbers(const char *separator, const unsigned int n, ...);` |
| `2-print_strings.c`      | `void print_strings(const char *separator, const unsigned int n, ...);` |
| `3-print_all.c`          | `void print_all(const char * const format, ...);`                       |                                                     

## Tasks :page_with_curl:

* **0. Beauty is variable, ugliness is constant**
  * [0-sum_them_all.c](./0-sum_them_all.c): C function that returns the sum of
  all its paramters.
    * If the parameter `n == 0`, the function returns `0`.

* **1. To be is to be the value of a variable**
  * [1-print_numbers.c](./1-print_numbers.c): C function that prints numbers,
  followed by a new line.
    * The paramter `separator` is the string to be printed between numbers.
    * The paramter `n` is the number of integers passed to the function.
    * If `separator` is `NULL`, it is not printed.

* **2. One woman's constant is another woman's variable**
  * [2-print_strings.c](./2-print_strings.c): C function that prints strings,
  followed by a new line.
    * The parameter `separator` is the string to be printed between the strings.
    * The parameter `n` is the number of strings passed to the function.
    * If `separator` is `NULL`, it is not printed.
    * If one of the strings is `NULL`, the function prints `(nil)` instead.

* **3. To be is a to be the value of a variable**
  * [3-print_all.c](./3-print_all.c): Write a function that prints anything.

  *  Prototype: `void print_all(const char * const format, ...);`
    where format is a list of types of arguments passed to the function
    c: char
    i: integer
    f: float
    s: char * (if the string is NULL, print (nil) instead
   * any other char should be ignored
       - example:  `print_all("ceis", 'B', 3, "stSchool");`
   * You are not allowed to use for, goto, ternary operator, else, do ... while
   * You can use a maximum of
       - 2 while loops
       - 2 if
   * You can declare a maximum of 9 variables
   * You are allowed to use printf
   * Print a new line at the end of your function
