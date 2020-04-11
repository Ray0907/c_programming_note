#include <stdio.h>

int main(void) {

    int m, n, r;

    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
		printf("r: %d\n m: %d\n n: %d", r,m,n);
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}