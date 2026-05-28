#include <stdio.h>

int main(){
	puts("One.");
	puts("Two.");
	printf("%s", "Three."); // using only printf("Three") would be fine but is not good practice
	printf("%s", "Four."); // using printf wont add a '\n' to our code
	return(0);

}
