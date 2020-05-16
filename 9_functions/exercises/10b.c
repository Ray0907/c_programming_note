#include <stdio.h>
#define N 5

double average(int a[], int n) {
	double average = 0;
	int sum =0;
	for(int i =0; i < n; i++) {
		sum += a[i];
	}
	average = sum / N;
	return average;
}

int main(void) {
	int a[N], i;
	printf("Enter an integer array: ");
	for(i=0; i< N; i++) {
		scanf("%d", &a[i]);
	}
	printf("Average is %f\n", average(a, N));
	return 0;
}