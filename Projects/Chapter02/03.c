#include <stdio.h>
#define PI 3.14
/**
 * Name:    03.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.3 Pg. 34
 * Purpose: Compute the volume of a sphere with-
 *          radius: user input
 *          formula: v = 4/3(pi)r^3
 */

int main(void)
{
    int radius;
    float volume;
    
    printf("Calculate the volume of a sphere\nEnter radius: ");
    scanf("%d", &radius);
    
    volume = 4.0f/3.0f*PI*radius*radius*radius;

    printf("Volume = %.2f\n", volume);

    return 0;
}