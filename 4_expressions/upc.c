#include  <stdio.h>

int main(void) {
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,
		first_sum, second_sum, total;
	printf("Enter the fitst (single) digit: ");
	scanf("%1d", &i1);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i2, &i3, &i4, &i5, &i6);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i7, &i8, &i9, &i10, &i11);

	first_sum = i1 + i3 + i5 + i7 + i9 + i11;
	second_sum = i2 + i4 + i6 + i8 + i10;
	total = first_sum *3 + second_sum;
	
	printf("Check digit: %d\n", 9 - ((total -1) % 10));
	return 0;
}