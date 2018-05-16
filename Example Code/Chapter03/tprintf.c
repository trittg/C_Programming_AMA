#include <stdio.h>
/**
 * Name:    tprintf.c
 * Date:    2018 05 16
 * Author:  trittg
 * Section: 3.1 Pg. 40
 * Purpose: Shows off the various usages of printf function and escape sequences
 */

int main(void)
{
    int i = 40;
    float x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);


    printf("1\a2\b3\n4\t567890\n");

    return 0;
}


