#include <stdio.h>

int main(void) {
	float loan, rate, monthly_payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	loan = loan*(1+rate/1200) - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", loan*(1+rate/1200) - monthly_payment);

	loan = loan*(1+rate/1200) - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", loan*(1+rate/1200) - monthly_payment);


	printf("Balance remaining after third payment: %.2f\n", loan*(1+rate/1200) - monthly_payment);
}