## pointers

before anything 

### heap memory 
It's an unstructured area of memory that can be used to store data. The heap is somewhat slower to access than the stack, but the benefit is you can store whatever you like on there without knowing beforehand what the size of the data to store will be. memory on the heap can be allocated dynamically during runtime, so if you were to store the user's name on the heap, you could allow the user to type any number of characters.

### stack memory
The stack is a very structured and orderly section of memory. When you launch a program, the instructions for that function are loaded onto the stack, and then each function is assigned an area of memory called a 'stack frame'. The stack frame contains the local variables that are used by the function.  The stack is very structured, and you need to know how much data to reserve on the stack when you write the program. The downside to using stack memory is that the program needs to know exactly how much memory to allocate at the time the program is compiled.

## What is a pointer then
THey hold a memory address of another variable. Can be understood as a signpost, which informs C where to hop to, they do nothing more than point to another address in memory
