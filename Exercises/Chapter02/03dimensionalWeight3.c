#include <stdio.h>
/**
 * Name:    03.c
 * Date:    2018 05 15
 * Author:  trittg
 * Exercise: 2.3 Pg. 33
 * Purpose: Condense the dimensional weight program:
 *          replace height, weight, length assignments with initializers
 *          remove weight variable, calculate weight value in last printf
 *          
 */

int main(void)
{
    //declare and initialize
    int height = 8, length = 12, width = 10;
    int volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}
