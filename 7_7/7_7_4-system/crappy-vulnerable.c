#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char goDir[30];
    char lsCmd[33] = "ls ";

    puts("Enter a dir path to see dir listings");
    printf("Options:\n/home/john\n/home/susan\n\n> ");
    fgets(goDir, sizeof(goDir), stdin);
    strcat(lsCmd, goDir);
    system(lsCmd);

    return 0;
}
