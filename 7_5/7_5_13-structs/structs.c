#include <stdio.h>

struct User {
	char *name;
	int age;
};

int main(){
	struct User acc_1;
	acc_1.name = "Andres C";
	acc_1.age = 23;
	
	struct User acc_2;
	acc_2.name = "Daniel C";
	acc_2.age = 25;

	
	printf("Account 1, %s is %d years old\n", acc_1.name, acc_1.age);
	printf("Account 2, %s is %d years old\n", acc_2.name, acc_2.age);
	
	return 0;

}
