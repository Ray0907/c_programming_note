/* Calculates the number of digits in an integer */
#include <stdio.h>
int main(void) {
	int digits =0, n;
	printf("enter a nonnegative integer:");
	scanf("%d", &n);
	do {
		n /= 10;
		printf("n:%d\n", n);
		digits++;
	} while (n >0);
	// If n is 0 initially, this loop will not execute.
	// while (n > 0) {
	// 	n/= 10;
	// 	printf("n: %d\n", n);
	// 	digits++;
	// }

	printf("The number has %d digit(s).\n", digits);
	return 0;
}