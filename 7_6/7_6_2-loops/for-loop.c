#include <stdio.h>

int main() {
    puts("Starting countdown...");
    for (int n = 10; n > 0; n--) {
        if (n == 2) {
            puts("Aborted!");
            break;
        }
        if (n % 2 == 0) {
            printf("!... ");
            continue;
        }
        printf("%d... ", n);
    }
    printf("%s", "\n");

    return(0);
}
