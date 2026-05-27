#include <stdio.h>

int main(){

	/*this is a very verbose version of the code
	 * it can be writen like:
	 * char greetings[]= "hello";
	 * char *msg_ptr = greeting*/
	char greeting[] = "Hello";
	char *msg_ptr; // our pointer
	
	msg_ptr = &greeting[0]; //this sets the value for the pointer to point to the addressof the greeting var, were & means the address of the item



	printf("Address of greeting:\n%p\n\n", &greeting);
	printf("Address stored in msg_ptr:\n%p\n\n", msg_ptr);
	printf("Character at *msg_ptr: %c\n\n", *msg_ptr);

	return 0;


}
