#include <stdio.h>

int main(){
	char *block = "█";
    	char *period = ".";
	int loaded = 0;
	
	for (int row = 1; row <= 10; row++) {
        	loaded++;
        	for (int i = 1; i <= 10; i++) {
            		printf("%s", i <= loaded ? block : period);
        	}
        	printf(" %d%%\n", loaded * 10);
    	}
	return 0;
}
