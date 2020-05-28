#include <stdio.h>
#define N 10

int *find_largest(int a[], int n);
int main(void) {
	int largest;
	int a[N];
	printf("Enter an array:");
	for(int i=0; i< N; i++) {
		scanf("%d", &a[i]);
	}
	for(int i =0; i< N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	largest = *find_largest(a, N);
	printf("Largest number is %d\n", largest);
	return 0;
}

int *find_largest(int a[], int n) {

    int i, *largest = &a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > *largest)
            largest = &a[i];
    }
    return largest;
}
