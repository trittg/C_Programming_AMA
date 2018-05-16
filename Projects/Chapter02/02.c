#include <stdio.h>
#define PI 3.14
/**
 * Name:    02.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.2 Pg. 34
 * Purpose: Compute the volume of a sphere with a
 *          radius: 10
 *          formula: v = 4/3(pi)r^3
 */

int main(void)
{
    float volume = 4.0f/3.0f*PI*10*10*10;
    
    printf("Volume = %.2f\n", volume);
    return 0;
}