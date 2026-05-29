#include <stdio.h>

int main() {
    int num = 6;
    printf("num is: %d\n\n", num); // num is: 6

    printf("%d\n", 6 + 2);         // 8
    printf("%d\n", 6 * 5);         // 30
    printf("%d\n", 4 % 2);         // 0
    printf("%d\n", ++num);         // 7
    printf("%d\n", ++num);         // 8
    printf("%d\n", --num);         // 7
    printf("%d\n", num += 10);     // 17
    printf("%d\n", num > 16);      // 1 (true)
    printf("%d\n", num && 10);     // 1 (true)
    printf("%d\n", num || 10);     // 1 (true)
    printf("%d\n", !num);          // 0 (false)
    printf("%d\n", num -= 17);     // 0
    printf("%d\n", !num);          // 1 (true)
    printf("%d\n", num && 10);     // 0 (false) (is considering 0 && 10, that's falsy and truthy)
    printf("%d\n", --num);         // -1
    printf("%d\n", !num);          // 0 (is considering !-1, that's falsy)

    return(0);
}
