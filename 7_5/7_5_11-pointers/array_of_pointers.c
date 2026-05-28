#include <stdio.h>

int main(){
	char foods[][6] = {"Apples", "Banana", "Orange"};
	char *food_ptrs[] = { &foods[0][0], &foods[1][0], &foods[2][0] };
	
	printf("foods[0] address: %p, food_ptrs[0] pointer value: %p\n", &foods[0], food_ptrs[0]);
    	printf("foods[1] address: %p, food_ptrs[1] pointer value: %p\n", &foods[1], food_ptrs[1]);
    	printf("foods[2] address: %p, food_ptrs[2] pointer value: %p\n", &foods[2], food_ptrs[2]);

    	return 0;
}
