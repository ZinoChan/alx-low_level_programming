### Automatic and dynamic allocation

- automatic allocation: when a variable is declared inside a function without using the `malloc` function. the memory is allocated on the stack and is automatically freed when the function returns.

```
void foo()
{
    int x; // automatic allocation
}
```

- dynamic allocation: when memory is allocated using the `malloc` function. this memory is allocated on the heap and is not automatically freed. it must be frreed using the `free` function.

```
void bar()
{
    int *y = malloc(sizeof(int)); // dynamic allocation

    free(y); explicit deallocation
}
```

### Malloc

malloc is a funtion used to allocate a block of memory of a specified size on the heap. It returns a `pointer` to the beginning of the block of memory, or NULL if the allocation fails.


### Free

free is used to deallocate memory that was previously allocated with malloc. It takes a pointer to the beginning of the memory block that needs to be deallocated.
