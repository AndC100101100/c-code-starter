#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char *msg;

	msg = (char *) malloc(12); // reserving 12 bytes of heap memoery using malloc and assigning the pinter address value of waht we receive back under msg
	strcpy(msg, "Hello there"); // copy Hello there into our destination, in this case the msg var, copying the string to a pointer address, which is saving the bytes to heap memory
	printf("Message: %s\nAddress: %p\n\n", msg, (void *)msg);

	// updating message in memory using realloc nad strcat
	msg = (char *) realloc(msg, 25); // we use reallocate the amount of space to 25 bytes
	strcat(msg, " from Andres C"); // concat whats already at msg with some extra bytes
	printf("Message: %s\nAddress: %p\n\n", msg, (void *)msg);

	free(msg);

	return 0;

}
