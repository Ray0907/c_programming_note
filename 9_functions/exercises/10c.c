#include <stdio.h>
#define N 5
int positives (int a[], int n) {
	int i =0, count =0;
	while(i < n) {
		if(a[i] > 0)
			count++;
		i++;
	}
	return count;
}
int main(void) {
	int a[N], i;
	printf("Enter an integer array: ");
	for(i=0; i< N; i++) {
		scanf("%d", &a[i]);
	}
	printf("The number of positive elements in a : %d\n", positives(a, N));
	return 0;
}