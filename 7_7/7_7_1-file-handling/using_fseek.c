#include <stdio.h>

int main(){
	FILE *fp = fopen("message.txt", "r");
	char buff[2];
	// using ftell to inform us of the pointer position
	printf("File pointer at byte %ld\n", ftell(fp));
	fseek(fp, 50, SEEK_SET); // move the pointer 50 bytes from the start of the file
	printf("File pointer at byte %ld\n", ftell(fp));

	// itereate throuth each character for a count of 14
	// each iteration fscanf will read in the bytes for two
	// characters in hexa, and the output the iteration
	// count and the ASCII char
	for (int i = 0; i < 14; i++){
		fscanf(fp, "%hhx", buff);
		printf("%d: %s ", i, buff);
	}

    	printf("\nFile pointer at byte %ld\n", ftell(fp));
    	rewind(fp);
    	printf("File pointer at byte %ld\n", ftell(fp));
    	fclose(fp);
	
	return 0;
}
