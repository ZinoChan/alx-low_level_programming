# C - Static libraries

### functions 

* [functions implementation](./functions): all functions listed in [main.h](./main.h).

### Header file :file_folder:

* [main.h](./main.h): Header file containing the prototypes of all functions
  included in `libmy.a`.

### Tests :test_tube:
to test the created library run : 

```
./tests/0-test.sh
```

## Tasks :page_with_curl:

* **0. A library is not a luxury but one of the necessities of life**
  * [libmy.a](./libmy.a): C Static library containing all the functions
  listed in the [`main.h`](./main.h) file

* **1. Without libraries what have we? We have no past and no future**
  * [create_static_lib.sh](./create_static_lib.sh): Bash script that creates a static
  library called `liball.a` from all the `.c` files in the current directory.