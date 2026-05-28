## malloc (<stdlib.h>)
We can also put data on the heap and reallocate its size in bytes sizes with malloc() and realloc(). malloc is used in c to dynamically reserve a specific block of memory on the heap during runtime. 

malloc takes a single argument, which is the number of bytes you want to allocate. it will then return a generic void pointer to the first byte of that reserved memory. Allocates memory on the "heap," ensuring data survives outside the local function scope (unlike regular variables that are deleted from the stack)

lack of memory on the system to fulfill the request will make `malloc` return `NULL`

to avoid this we could use the `sizeof` operator to dynamically calculate the correct number og bytes needed:
```c
int *ptr = (int*) malloc(5 * sizeof(int));
```
this example uses malloc to reserve memory to store 5 integers.
 
