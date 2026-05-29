#include <stdio.h>

/*we specify the code that we want to execute 
 * upfront, and that will happen as long 
 * as while os truthy*/


int main() {
    int n = 10;

    puts("Starting countdown...");
    do {
        if (n == 2) {
            printf("Aborted!");
            break;
        }
        if (n % 2 == 0) {
            n--;
            continue;
        }
        printf("%d... ", n);
        n--;
    } while (n > 0);
    printf("%s", "\n");

    return(0);
}
