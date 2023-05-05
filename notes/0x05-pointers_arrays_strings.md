## Pointers

C pointers are variables that store the memory address of another variable.

1. Declaration:
```
int *ptr; // Declares an integer pointer named 'ptr'
```
2. Initialization:
A pointer should be initialized with the address of a variable, using the '&' (address-of) operator:
```
int num = 42;
int *ptr = &num; // Initializes the pointer with the address of 'num'
```
3. Dereferencing:
To access the value of the variable the pointer is pointing to, you use the '*' operator:
```
int value = *ptr; // Accesses the value of 'num' through the pointer
```
4. Pointer arithmetic:
useful with arrays:
```
int arr[5] = {1, 2, 3, 4, 5};
int *ptr = arr; // Points to the first element of the array

ptr++; // Now points to the second element (arr[1])
```

## Arrays
Arrays in C are contiguous blocks of memory used to store multiple elements of the same data type.

1. Declaration and initialization:
```
int numbers[5]; // Declares an integer array of 5 elements

char letters[4] = {'a', 'b', 'c', 'd'}; // Declares and initializes a character array

int primes[] = {2, 3, 5, 7, 11}; // The compiler determines the size of the array (5 in this case)
```

2. Accessing elements:
```
int first_number = numbers[0]; // Accesses the first element of the 'numbers' array

letters[2] = 'z'; // Changes the third element of the 'letters' array to 'z'
```
3. Passing to functions:
When you pass an array to a function, it is passed as a pointer to the first element. The function cannot determine the size of the array, so you must pass the size as a separate argument.
