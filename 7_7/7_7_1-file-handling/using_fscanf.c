#include <stdio.h>

int main(){
	FILE *fp = fopen("message.txt", "r");
	char buff[2];

	while(fscanf(fp, "%hhx", buff) != EOF){
		printf("%s", buff);
	}
	fclose(fp);
	return 0;
}
