#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter an amount:");
    scanf("%d", &amount);
    printf("With tax added: %f\n", amount*1.05f);
    return 0;
}