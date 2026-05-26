#include <stdio.h>

int main(){
	char hello_pieces[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // null terminator, saved in memory as 00000000, signifies the end of data for the item being read, terminates reading with nothing else or null further to pick up, in this case, the end of our item in memory
	puts(hello_pieces);

	char hello_whole[] = "Hello";
	puts(hello_whole);
	
	/*
	 * the following would each present different behavior, were puts hello3 would
	 * give us an excess element warning for having more elements than what we declared 
	 * our array with. hello2 would simply cut our string short as the null terminator is halfway
	 * */

	//char hello2[6] = {'H', 'e', 'l', 'l', '\0', 'o'};
    	//puts(hello2);
    	
	//char hello3[6] = {'H', 'e', 'e', 'l', 'l', 'o', '\0'};
    	//puts(hello3);
	return(0);
}
