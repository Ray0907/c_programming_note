#include <stdio.h>
#include <math.h>

int main(void) {
    int x;
    printf("Please input the x value(integer): ");
    scanf("%d", &x);
    
     printf("Result: %d\n",
           (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x)
           - (x * x) + (7 * x) - 6);
    return 0;
}