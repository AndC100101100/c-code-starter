#include <stdio.h>

int main(){
	FILE *fp = fopen("file.txt", "r");
	char buff[2];
	// using ftell to inform us of the pointer position
	printf("File pointer at byte %ld\n", ftell(fp));
	fseek(fp, 44, SEEK_SET); // move the pointer 50 bytes from the start of the file
	printf("File pointer at byte %ld\n", ftell(fp));


	for (int i = 0; i < 9; i++){
		fscanf(fp, "%hho", buff);
		printf("%s", buff);
	}

    	printf("\nFile pointer at byte %ld\n", ftell(fp));
    	rewind(fp);
    	printf("File pointer at byte %ld\n", ftell(fp));
    	fclose(fp);
	
	return 0;
}
