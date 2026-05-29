#include <stdio.h>

int main() {
	int n = 0;
	puts("Printing all odd numbers between 0 and 20");

	while (n <= 20) {
		if (n % 2 == 0){
			n++;
			continue;
		
		}
		printf("%d is odd...\n", n);
		n++;
	
	}
	return 0;

}
