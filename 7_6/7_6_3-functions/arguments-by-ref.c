#include <stdio.h>

void add5(int *n) {
    *n += 5;
    printf("%d\n", *n);
}

int main() {
    int num = 0;

    add5(&num);               // 5
    printf("%d\n", num);      // 5
    add5(&num);               // 10
    printf("%d\n", num);      // 10
    num += 2;
    printf("%d\n", num);      // 12
    add5(&num);               // 17
    printf("%d\n", num);      // 17

    return(0);
}
