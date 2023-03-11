### Argc - Argv

* `argc` is an integer that represents the number of arguments passed to the program, including the name of the program itself.

* `argv` is an array of strings that contains the arguments themselves, with argv[0] being the name of the program.

#### passing arguments

```
./program arg1 arg2 arg3

argc = 4
argv[0] = ./program
argv[1] = arg1
argv[2] = arg2
argv[3] = arg3

```
###  __attribute__((unused)) or (void) 

 if a function has variables or parameters that are not used within the body of the function, the compiler may generate warnings indicating that those variables or parameters are unused. To avoid these warnings, you can use the __attribute__((unused)) or (void) syntax to explicitly indicate to the compiler that the variables or parameters are intentionally unused.
 
 ```
void my_function(int unused_variable __attribute__((unused))) {
  // function body
}
 ```

 ```
void my_function(int unused_variable) {
  (void) unused_variable; // unused variable
  // function body
}
 ```