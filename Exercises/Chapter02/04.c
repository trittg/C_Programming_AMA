#include <stdio.h>
/**
 * Name:    04.c
 * Date:    2018 05 15
 * Author:  trittg
 * Exercise: 2.4 Pg. 33
 * Purpose: declare but don't initialize some int anf float values
 *          Print these values, is there a pattern?
 */

int main(void)
{
    //declare but don't initialize
    int i1, i2, i3;
    float f1, f2, f3;

    printf("%d,\t%d,\t%d\n", i1, i2, i3);
    //seem like random values
    printf("%f,\t%f,\t%f\n", f1, f2, f3);
    //always 0.000000, might be set to 0.000000 by default
    return 0;
}