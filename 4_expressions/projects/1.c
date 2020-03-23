#include <stdio.h>

int main(void){
	int i, j, target;
	printf("Enter a two-digit number: ");
	scanf("%d", &target);
	i = target / 10;
	j = target % 10;
	printf("The reversal is: %d\n", 10*j + i);
	return 0;
}