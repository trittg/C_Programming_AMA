#include <stdio.h>
/**
 * Name:    05.c
 * Date:    2018 05 16
 * Author:  trittg
 * Exercise: 3.5 Pg. 49
 * Purpose: search for an int when given a float
 */

int main(void)
{
    int i;
    float x, y;

    printf("Enter float int float: ");
    scanf("%f%d%f", &x, &i, &y);

    printf("x: %f\t i: %d\t y: %f\n", x, i, y);
    
    return 0;
}
