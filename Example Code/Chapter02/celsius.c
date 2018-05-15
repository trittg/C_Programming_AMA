#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
/**
 * Name:    celsius.c
 * Date:    2018 05 15
 * Author:  trittg
 * Section: 2.6 Pg. 24
 * Purpose: Take in input Fahrenheit and convert to Celsius
 *          Use macro definitions
 */

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}


