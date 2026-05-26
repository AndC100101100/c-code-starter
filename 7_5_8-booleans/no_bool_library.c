#include <stdio.h>
typedef int enum {false, true } bool;

/*
 *in here we defined our own type definition which is of an int 
 data types called bool, we defined the types within it and called
 them true and false, translating this same values into 1 and 0 
 respectively.
 * */

int main(){
	bool fun = true;
	bool evil = false;

	printf("Fun: %d, Evil: %d", fun, evil);

	/**
	 * booleans translate into integers so most of the truthy and falsy rules 
	 * taht youd expect would apply. its output would be do to fun being set
	 * to true and under the hood translating to the int value 1, so 1==1 is true meaning 1,
	 * while 1==0 isnt , so false, meaning that the int value in that case is 0
	 * /
	printf("Fun equals 1? %d\nFun equals 0? %d", fun == 1, fun == 0);

	return 0;
}
