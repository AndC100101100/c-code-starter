#include <stdio.h>

int main() {
    char data[20];
    puts("Enter some data here: ");
    fgets(data, sizeof data, stdin); // we use fgets to fix our vuln, were we use sizeof of our array to determine the maximun bytes to read, and the source of where to read the input from, standard in this case
    printf("You entered: \n%s", data);
    return(0);
}
