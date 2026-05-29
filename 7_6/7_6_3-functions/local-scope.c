#include <stdio.h>

void add5(int n) {
    n += 5;
    printf("%d\n", n);
}

/*
 *The nature of local scope variables is
 that the start fresh  when you invoke the func
 again, and any adjustment made to the var 
 withing it will stay within the scope of
 the func
 * */


int main() {
    int num = 0;

    add5(num);                 // 5
    printf("%d\n", num);       // 0
    add5(num);                 // 5
    printf("%d\n", num);       // 0
    num += 2;
    printf("%d\n", num);       // 2
    add5(num);                 // 7
    printf("%d\n", num);       // 2

    return(0);
}
