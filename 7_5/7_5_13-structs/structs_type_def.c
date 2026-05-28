#include <stdio.h>

typedef struct{
	char *name;
	int age;
} User;

int main()
{
	User acc_1;
	acc_1.name = "Andres C";
	acc_1.age = 23;

	printf("Account 1, his name is %s and he is %d years old\n", acc_1.name, acc_1.age);

	return 0;

}
