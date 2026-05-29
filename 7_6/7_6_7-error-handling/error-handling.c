#include <stdio.h>

int main() {
    FILE *file;
    if (0 == (file = fopen("config.txt", "r"))) {
        fprintf(stderr, "Error: config.txt doesn't exist\n");
        return(1);
    }

    // Make use of config file here...

    fclose(file);

    return(0);
}
