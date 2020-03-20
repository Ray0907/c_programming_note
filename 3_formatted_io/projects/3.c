#include <stdio.h>

int main(void) {
	int gs1, identifier, p_code, item_number, check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &identifier, &p_code, &item_number, &check_digit);
	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", identifier);
	printf("Publisher code: %d\n", p_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);
	return 0;
}