#include <stdio.h>

int main(void) {
	int hour, min;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);
	if(hour > 12 && hour <= 24) {
		printf("Equivalent 12-hour time: %d:%d PM\n", hour -12, min);
	}
	else {
		printf("Equivalent 12-hour time: %d:%d AM\n", hour, min);
	}
	return 0;
}