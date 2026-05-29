#include <stdio.h>
#include <string.h>

int main() {
    char data[20];
    puts("Enter some data here: ");
    fgets(data, sizeof data, stdin);
    if (strlen(data) > 0){
        if (data[strlen(data) - 1] != '\n') { // if second to las is not a new line, we add it
            data[strlen(data) - 1] = '\n';
        }
    }
    printf("You entered: \n%s", data);

    return(0);
}
