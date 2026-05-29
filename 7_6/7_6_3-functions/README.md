## functions
we know c is strictly typed so when stating a function you also have to be explicit about what its return value type will be, even if it is not going to return anything, in that case we would use `void`

vars withing a function in C are locally scoped, so variable changes that happen in a function only happen in the function and dont leak out of the fucntion to affect anything outside

## function pointers
We can call a function by calling a pointer to it. This is possible because it is not just variables that can be set and referenced in memory by functions too. 
A function is data, it exists in memory and we can call it using its memory address. look at the `function-pointers.c` file for an example of it. 
