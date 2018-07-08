#include <stdio.h>
/**
 * Name:    04.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.4 Pg. 96
 * Purpose: Beaufort wind scale, user inputs wind speed in knots
 *          program returns the description
 */

int main(void)
{
    int speed;

    printf("Enter wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Calm\n");
    else if (speed < 4)
        printf("Light air\n");
    else if (speed < 28)
        printf("Breeze\n");
    else if (speed < 48)
        printf("Gale\n");
    else if (speed < 64)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    return 0;
}