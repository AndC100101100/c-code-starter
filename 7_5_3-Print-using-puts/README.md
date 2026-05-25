## using puts()
we use the stdio.h header file for basic input and ouput functionality in C programs


## main function

this is C's main entry point for a program. C is is a strictly typed language and you have to specify the return type, meaning we have to state the type of variable the fucntion will return when finished.

```c
int main(){
    return(0);
}
```
in this iteration returning anything other than an int would cause problems. part of strict typing

in this case we return 0, which is our exit code for a successful execution, anything higher than that indicates an error has ocurred.
