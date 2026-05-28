#include <stdio.h>

int main() {
    int num = 12;
    printf("num is: %d\n\n", num);

    // Standard if/else if/else
    // outputs: num is 12
    if (num > 12) {
        puts("num is greater than 12");
    } else if (num < 12) {
        puts("num is less than 12");
    } else {
        puts("num is 12");
    }

    
    
    
    // Ternary
    // outputs: "num is, or greater than 12"
    (num >= 12)
        ? puts("num is, or greater than 12")
        : puts("num is less than 12");

    
    
    
    // Ternary - inside function
    // outputs: "num is, or greater than 12"
    puts(
        num >= 12
            ? "num is, or greater than 12"
            : "num is less than 12"
    );

    
    
    
    
    // Nested ternaries - less readable!
    // outputs: "num is 12"
    puts(
        num > 12
            ? "num is greater than 12"
            :
            num < 12
                ? "num is less than 12"
                : "num is 12"
    );

    return(0);
}
