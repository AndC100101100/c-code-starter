#include <stdio.h>
#include <stdbool.h>

int main() {
    // bools
    bool var = true;
    printf("var is: %d\n\n", var);          // var is 1

    printf("%d\n", var == var);             // 1
    printf("%d\n", var == true);            // 1
    printf("%d\n", var == false);           // 0
    printf("%d\n", true == true);           // 1
    printf("%d\n", false == false);         // 1
    printf("%d\n", true > false);           // 1
    printf("%d\n", false > true);           // 0
    printf("%d\n", true == 1);              // 1
    printf("%d\n\n", false == 0);           // 1

    // floats and doubles
    float flt = 123.45;
    double dbl = 1234567.1234567;
    printf("flt is: %f\n", flt);            // flt is 123.449997
    printf("dbl is: %lf\n\n", dbl);         // dbl is: 1234567.1234567

    printf("%d\n", flt == flt);             // 1
    printf("%d\n", dbl == dbl);             // 1
    printf("%d\n", flt == 123.45);          // 0
    printf("%d\n", dbl == 1234567.1234567); // 1
    printf("%d\n", dbl > flt);              // 1

    return(0);
}
