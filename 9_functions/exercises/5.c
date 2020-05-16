#include <stdio.h>

int num_dights(int n) {
	int count = 0 ;
	while(n / 10 != 0) {
		count++;
		n = n/ 10;
	}
	return count +1;
}

int main(void) {
	int num, count;
	printf("Enter a number: ");
	scanf("%d", &num);
	switch (num_dights(num))
	{
	case 1:
		printf("num_digit : %d\n", num_dights(num));
		break;
	
	default:
		printf("num_digits : %d\n", num_dights(num));
		break;
	}
	return 0;
}