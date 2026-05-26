#include <stdio.h>

int main(){
	double truck_apples = 3172.45;
	printf("Truck full of apples cost : $%f\n", truck_apples);
	printf("Truck full of apples cost, fixed : $%.2f\n", truck_apples);

	double plex_company_stock_price = 17.098413;
	printf("Plex Company - stock market price : %f\n", plex_company_stock_price);


	double pi_to_20_digits = 3.14159265358979323846;
	printf("Pi to 20 decimal digits: %.20f\n", pi_to_20_digits); // after 15 digits, it starts losing precision

	double calc_5000000_pi_20= 5000000 * 3.14159265358979323846;
	printf("5,000,000 * Pi to 15 decimal digits: %.15f\n", calc_5000000_pi_20);
	
	return(0);
}
