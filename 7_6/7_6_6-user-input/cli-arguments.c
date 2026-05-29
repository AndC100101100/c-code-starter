#include <stdio.h>
/*
 *argc, an int type, will contain the number of arguments
 passed to the program when it was executed, it will include
 the name of the program (./program abc xyz) so it will have
 a count of three, the name and two arguments.
 argv, which is a character array, contains all of those 
 argument values that were passed in
 * */
int main(int argc, char *argv[]) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }

    return(0);
}
