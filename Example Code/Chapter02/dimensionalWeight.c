#include <stdio.h>
/**
 * Name:    dimensionalWeight.c
 * Date:    2018 05 14
 * Author:  trittg
 * Section: 2.4 Pg. 20
 * Purpose: Calculating shipping weight with ints 
 */

int main(void)
{
    //declare and then initialize
    int height, length, width;
    height = 8;
    length = 12;
    width = 10;

    //declare and initialize
    int volume = height * length * width;
    int weight = (volume +165) / 166;    

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    //using an expression as a value to get the same result
    printf("Dimensional weight (pounds): %d\n", (volume +165) / 166);

    return 0;
}
