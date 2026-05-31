#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("USER: %s\n", getenv("USER"));
    printf("PATH: %s\n", getenv("PATH"));
    printf("HOME: %s\n", getenv("HOME"));
    printf("ROOT: %s\n", getenv("ROOT"));
    printf("LANGUAGE: %s\n", getenv("LANGUAGE"));
    printf("PWD: %s\n", getenv("PWD"));
    printf("SHELL: %s\n", getenv("SHELL"));
    printf("COLORTERM: %s\n", getenv("COLORTERM"));

    return 0;
}
