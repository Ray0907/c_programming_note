#include <stdio.h>

int main(void) {
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	
	if(i >= 0 && i <= 9 ) {
		printf("This number %d has %d digits\n", i, 1);
	}
	else if(i >= 10 && i <= 99) {
		printf("This number %d has %d digits\n", i, 2);
	}
	else {
		printf("This number %d has %d digits\n", i, 3);
	}
	return 0;
}