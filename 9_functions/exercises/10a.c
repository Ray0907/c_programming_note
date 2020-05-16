#include <stdio.h>
#define N 5

int largest(int a[], int n) {
	int i = 0, max = a[0];
	while(i++ < n) {
		if(a[i] > max) max = a[i];
	}
	return max;
}

int main(void) {
	int a[N], i;
	printf("Enter an integer array: ");
	for( i=0; i< N ; i++) {
		scanf("%d", &a[i]);
	}
	printf("Largest number is : %d\n", largest(a, N));
}