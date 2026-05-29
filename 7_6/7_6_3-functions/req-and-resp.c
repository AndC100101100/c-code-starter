#include <stdio.h>

int add10(int n)
{
	return n + 10;
}


int main()
{
	int num = 0;
	add10(num);
	printf("%d\n", num); // will print 0

	num = add10(num); // setting num as the value of num plus 10
	printf("%d\n", num); // will print 10

	num = add10(num);	
	printf("%d\n", num); // will print 20
	
	return 0;


}
