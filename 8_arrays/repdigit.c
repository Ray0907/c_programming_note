/* Checks number for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void) {
	bool digit_seen[10] = {false};
	int digit;
	long n;
	printf("Enter a number:");
	scanf("%ld", &n);

	while (n >0) {
		digit = n % 10;
		if(digit_seen[digit])
			break;
		printf("digit: %d\n",digit);
		digit_seen[digit] = true;
		printf("N: %ld\n", n);
		n /= 10;
	}

	if( n> 0) 
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	return 0;
}
