#include <stdio.h>
#include <string.h>

extern char **environ;

int main() {
    int i = 0;
    int j = 0;
    while(environ[i]) {
        char *ptr = strtok(environ[i++], "="); // splitting on the = char with strtok
        while (ptr != NULL) {
		printf("%s\n", ptr);
		printf("%s", j % 2 == 0 ? "key: " : "val: ");
		if (j % 2 == 1) printf("\n");

           	ptr = strtok(NULL, "");
           	j++;
        }
    }

    return 0;
}

