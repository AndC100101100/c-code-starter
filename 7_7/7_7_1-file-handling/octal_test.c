#include <stdio.h>

int main() {
	FILE *fp = fopen("file.txt", "r");
	char buff[2];



	while (fscanf(fp, "%hho", buff) != EOF){
		printf("%s", buff);
	}

    fclose(fp);
    return 0;
}

