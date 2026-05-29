#include <stdio.h>

int main(){
	char *block = "█";
    	char *period = ".";
	int loaded = 7;
	for (int i = 1; i <=10; i++){
		printf("%s", i <= loaded ? block : period);
	
	}


	return 0;
}
