#include <stdio.h>

void say_hello(){
	puts("Hello from inside the function");
}


int main(){
	void (*pf)();
	pf = &say_hello;
	pf();

	return 0;
}
