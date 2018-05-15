#include <stdio.h>
/**
 * Name:    dimensionalWeight2.c
 * Date:    2018 05 15
 * Author:  trittg
 * Section: 2.5 Pg. 23
 * Purpose: Take in input and calculate the shipping weight
 */

int main(void)
{
    //declare and then initialize
    int height, length, width, volume, weight;

    printf("Height of box:\t");
    scanf("%d", &height);
    printf("Length of box:\t");
    scanf("%d", &length);
    printf("Width of box:\t");
    scanf("%d", &width);

    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
