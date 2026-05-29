#include <stdio.h>
#include <string.h>

int main()
{
	char *arr[] = {"ab", "cd", "ef"};
	char *str = "cd";

	int arr_len = sizeof(arr)/sizeof(arr[0]);

	int i;

	for (i = 0; i < arr_len; i++){
		if(!strncmp(arr[i], str, sizeof(arr[i]))){
			printf("%s found at arr index %d", str, i);
		}
	
	} 

	return 0;

}
