#include <stdio.h>

extern char **environ;

int main(){
	int i = 0;
	// here we use i as the index and also as an incrementor for the next looping item
	while(environ[i]){
		printf("%s\n", environ[i++]);
	}
	return 0;
}
