#include <stdio.h>

int main(void) {
	int a,b,c,d;
	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d + %d/%d", &a, &b, &c, &d);
	printf("The sum is %d/%d\n", a*d+b*c, b*d);
	return 0;
}