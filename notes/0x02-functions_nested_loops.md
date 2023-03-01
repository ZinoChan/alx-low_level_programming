### Function declaration / definitiion

- A declaration of a function is a statement that tells the compiler about the name of the function, the types of its parameters (if any), and its return type. A function declaration usually appears at the top of a source file, or in a header file. it's also known as a function `prototype`.

```
int add(int x, int y);
```

- a definition of a function is a statement that provides the actual implementation of the function.

```
int add(int x, int y) {
    return x + y;
}
```

### Header files

a header file is a file that contains declarations of functions, variables, constants, and other types of data that can be used in multiple source files.

- `#include <headerfile.h>`: used to include standard header files that are provided by the C standard library, such as stdio.h or math.h. These files are typically located in a system directory that is searched by the compiler when it is invoked.

- `#include "headerfile.h"`: used to include user-defined header files that are located in the same directory as the source file or in a directory specified by the compiler's search path

> main.h

```
int add(int x, int y);
```

> main.c

```
#include <stdio.h>
#include "main.h"

int main() {
    int a = 2, b = 3;
    printf("%d + %d = %d\n", a, b, add(a, b));
    return 0;
}
```

> addition.c

```
int add(int x, int y) {
    return x + y;
}
```

> compile

```
gcc main.c addition.c -o myoutput
```

=> the header file `main.h` contains a declaration of the `add` function, which is used in the `main` function in the `main.c` source file. The `add` function is defined in the `addition.c` source file, which is compiled and linked together with the `main.c` source file to produce the final executable `myoutput`.
