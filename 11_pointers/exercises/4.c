#include <stdio.h>

void swap(int* p, int* q);

int main(void) {
	int a, b;
	printf("Enter two integer: ");
	scanf("%d %d", &a, &b);
	printf("Before swap: %d %d\n", a, b);
	swap(&a, &b);
	printf("After swap: %d %d\n", a, b);
	return 0;
}

void swap(int* p, int* q) {
	int temp;
	temp = *q;
	*q = *p;
	*p = temp;
}