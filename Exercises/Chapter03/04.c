#include <stdio.h>
/**
 * Name:    04.c
 * Date:    2018 05 16
 * Author:  trittg
 * Exercise: 3.4 Pg. 49
 * Purpose: search for an int when given a float
 */

int main(void)
{
    int i, j;
    float x;

    printf("Enter int float int: ");
    scanf("%d%f%d", &i, &x, &j);

    printf("i: %d\t x: %f\t j: %d\n", i, x, j);
    
    return 0;
}
