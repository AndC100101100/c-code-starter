#include <stdio.h>
#include <string.h>

int main(){
	char data[20];
	FILE *file = fopen("test.txt", "r");

	fgets(data, sizeof data, file);
	if (strlen(data) > 0){
		if (data[strlen(data) - 1] != '\n'){
			data[strlen(data) - 1] = '\n';
		}
	}
	printf("The file contains: \n%s", data);
		fclose(file);
}
