### Library
A library is a collection of reusable code (functions, classes, variables...) that can be called upon when building our program.

#### Static Library
a file containing a collection of object files (*.o) that are linked whith another object file during the linking phase of compilation to form a final executable.

#### How to create a static library

1. compile all library codes (*.c) into object files (*.o) without linking. 

```
$ gcc -c -Wall -Werror -Wextra *.c
```

* -c: Compile and assemble, but do not link.

2. bundle all object files into one static library.


```
ar -rc libname.a *.o
```

* ar: (archive) create, modify, and extract from archives

* r:  insert object files or replace existing object files in the library, with the new object files.

* c: create the library if it doesn't already exist

#### Indexing a static library

writing an index into the created library speeds up subsequent access to its contents.

there are tow ways to create an index:

```
ranlib libname.a
```
or by adding the `s` flag

```
 ar -rcs libname.a *.o
```

#### Using a static library

```
gcc myprogram.c -o myprogram -L. -lname
```
This will link your program with the `libname.a` library and create an executable file named `myprogram`.

 * `L` : Specifies the path to the given libraries ('.' referring to the current directory)
* `l` : Specifies the library name without the "lib" prefix and the ".a" suffix, because the linker

> **Note:** when you create a static library, you need to include header files that define the interfaces of the functions in the library inside the program that will use the library.