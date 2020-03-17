/*  Computes the dimensional weight of a 
    box from input provided by the user */
#include <stdio.h>

int main(void) {
    int height, length ,width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("enter length of box: ");
    scanf("%d", &length);
    printf("Enter the width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimension weight (pounds): %d\n", weight);

    return 0;
}