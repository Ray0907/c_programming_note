#include <stdio.h>

int main(void) {
	int i, j, k, target;
	printf("Enter three-digit number: ");
	scanf("%d", &target);
	i = target/ 100;
	j = (target - i * 100) / 10;
	k = target - (i * 100 + j *10 );
	printf("The reversal is: %d\n", k*100 + j *10 + i);
	return 0;
}