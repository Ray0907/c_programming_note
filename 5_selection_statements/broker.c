#include <stdio.h>

int main(void) {
	float commission, value;

	printf("Enter value of trade: ");
	scanf("%f", &value);
	if(value < 2500.00f) {
		commission = 30.00f + 0.017f * value;
	}
	else if(value < 6250.00f ) {
		commission = 56.00f + 0.0066* value;
	}
	else if(value < 20000.00f ) {
		commission = 76.00f + 0.0034* value;
	}
	else if(value < 50000.00f ) {
		commission = 100.00f + 0.0022* value;
	}
	else if(value < 500000.00f ) {
		commission = 155.00f + 0.0011* value;
	}
	else {
		commission = 255.00f + 0.0009* value;
	}

	if(commission < 39) commission = 39;
	printf("Commission: $%.2f\n", commission);
	return 0;
}