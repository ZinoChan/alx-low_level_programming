# C - Preprocessor

## Tests :test_tube:

- [mains](./mains): test functions provided by the ALX program.

- [tests](./tests): bash scripts to run the tests.

### usage

to test a file run `./tests/[file_number]-test.sh`

### Example:
```
./tests/0-test.sh
```

## Tasks :page_with_curl:

* **0. Object-like Macro**
  * [0-object_like_macro.h](./0-object_like_macro.h): Header file that defines a
  macro named `SIZE` as an abbreviation for the token `1024`.

* **1. Pi**
  * [1-pi.h](./1-pi.h): Header file that defines a macro named `PI` as an abbreviation
  for the token `3.14159265359`.

* **2. File name**
  * [2-main.c](./2-main.c): C program that prints the name of the file it was
  compiled from followed by a new line.

* **3. Function-like macro**
  * [3-function_like_macro.h](./3-function_like_macro.h): Header file that defines a
  function-like macro `ABS(x)` that computes the absolute value of a number `x`.

* **4. SUM**
  * [4-sum.h](./4-sum.h): Header file that defines a function-like macro `SUM(x, y)`
  that computes the sum of the numbers `x` and `y`.
