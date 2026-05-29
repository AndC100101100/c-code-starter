#include <stdio.h>

int main()
{
	int n = 10;
	puts("Starting a countdown...");
	
	while (n > 0){
		printf("%d...", n);
		n--;
		if (n == 2 ){
			puts("Abort!");
			break;
		}
	}
	return 0;
}
