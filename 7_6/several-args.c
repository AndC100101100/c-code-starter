#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num = 0;

    num = sum(num, 5);
    printf("%d\n", num);                  // 5
    num = sum(num, 5);
    printf("%d\n", num);                  // 10
    printf("%d\n", num = sum(num, 5));    // 15
    printf("%d\n", num = sum(num, 5));    // 20

    return(0);
}
