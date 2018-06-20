#include <stdio.h>
/**
 * Name:    10.c
 * Date:    2018 06 19
 * Author:  trittg
 * Exercise: 4.8 Pg. 70
 * Purpose: Operator results
 */

int main(void)
{
    int i, j, k;

    i = 6;
    j = i += i;
    printf("a\ti = %d, j = %d\n", i, j);

    i = 5;
    j = (i -= 2) +1;
    printf("b\ti = %d, j = %d\n", i, j);

    i = 7;
    j = 6 + (i =2.5);
    printf("c\ti = %d, j = %d\n", i, j);

    i = 2, j =8;
    j = (i = 6) + (j = 3);
    printf("d\ti = %d, j = %d\n", i, j);

    return 0;
}