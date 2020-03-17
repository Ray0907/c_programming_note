#include <stdio.h>

int main(void) {
    int r;
    printf("please input the radius: ");
    scanf("%d", &r);
    printf("Sphere volume: %.2f cubic meters\n", 4.0f/3.0f * 3.14f * r*r*r);
}