#include <stdio.h>
// we never check that the user input is only 20 bytes, C introduces this input into memory without regards for its size
// can introduce a buffer overflow exploit
int main() {
    char data[20];
    puts("Enter some data here: ");
    scanf("%s", data);
    printf("You entered: \n%s\n", data);
    return(0);
}
