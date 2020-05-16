#include <stdio.h>


int check(int x, int y, int n) {
	if((x<= n-1 && x >= 0)  && (y <= n-1 &&y>=0))
		return 1;
	else return 0;
}

int main(void) {
	int x, y, n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter two integer: ");
	scanf("%d %d", &x, &y);
	printf("Return %d\n", check(x, y, n));
	
	return 0;
}