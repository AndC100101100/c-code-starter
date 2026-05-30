#include <stdio.h>

int main() {
	FILE *fp = fopen("file.txt", "r");
	char buff[2];

	fclose(fp);

    return 0;
}

