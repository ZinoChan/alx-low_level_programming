### Pointers

A pointer is a variable that stores the memory address of another variable.

- pointers to variables:

```
int main() {
   int a = 10;
   int *ptr; // declaring a pointer to an integer
   ptr = &a; // assigning the address of variable a to ptr
   printf("Value of a: %d\n", a); // prints 10
   printf("Address of a: %p\n", &a); // prints the address of a
   printf("Value of ptr: %p\n", ptr); // prints the value stored in ptr (the address of a)
   printf("Value at the address stored in ptr: %d\n", *ptr); // prints the value of the variable pointed to by ptr (10)
   return 0;
}
```

- Pointers to Arrays:
  A pointer to an array is a pointer that stores the starting address of the array.

```
int main() {
   int arr[5] = {1, 2, 3, 4, 5};
   int *ptr;
   ptr = arr; // assigns the address of the first element of the array to ptr
   printf("Value of arr[0]: %d\n", arr[0]); // prints 1
   printf("Address of arr[0]: %p\n", &arr[0]); // prints the address of the first element of the array
   printf("Value of ptr: %p\n", ptr); // prints the value stored in ptr (the address of the first element of the array)
   printf("Value at the address stored in ptr: %d\n", *ptr); // prints the value of the variable pointed to by ptr (1)
   return 0;
}
```

- Pointers to String:
  in C a string is an array of characters, where the last character is always a null character. For example, the string "hello" is represented in memory as the sequence of characters 'h', 'e', 'l', 'l', 'o', and '\0'.

so the pointer to a stirng stores the address of the first character in the string.
