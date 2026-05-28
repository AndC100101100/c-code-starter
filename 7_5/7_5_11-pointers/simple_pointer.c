#include <stdio.h>

int main(){


	char greeting[] = "Hello";
	char *msg_ptr = &greeting[0]; ; // our pointer, this sets the value for the pointer to point to the addressof the greeting var, were & means the address of the item

	printf("Address of greeting:\n%p\n\n", &greeting);
	printf("Address stored in msg_ptr:\n%p\n\n", msg_ptr);
	printf("Character at *msg_ptr: %c\n\n", *msg_ptr);
	printf("Address of *msg_ptr: %p\n\n", &msg_ptr);// our message pointer has an address, which contents are that value of the greetings memory address

 	// H, e, l, l, o, \o
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
 	msg_ptr++;
 	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
 	msg_ptr++;
 	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
 	msg_ptr++;
 	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
 	msg_ptr++;
 	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
 	msg_ptr++;
 	printf("Address: %p, Value: %d, Character: %c\n\n", msg_ptr, *msg_ptr, *msg_ptr);
   	
	// Adjacent data!
  	msg_ptr++;
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
   	msg_ptr++;
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
   	msg_ptr++;
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
   	msg_ptr++;
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
   	msg_ptr++;
   	printf("Address: %p, Value: %d, Character: %c\n", msg_ptr, *msg_ptr, *msg_ptr);
   	msg_ptr++;
	return 0;


}
