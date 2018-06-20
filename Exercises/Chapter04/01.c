#include <stdio.h>
/**
 * Name:    01.c
 * Date:    2018 06 19
 * Author:  trittg
 * Exercise: 4.1 Pg. 68
 * Purpose: Order of operations
 */

int main(void)
{
    int i, j, k;

    i=5;
    j=3;
    printf("a)\t%d %d\n", i / j, i % j);

    i=2;
    j=3;
    printf("b)\t%d\n", (i + 10) % j);

    i=7;
    j=8;
    k=9;
    printf("c)\t%d\n", (i + 10) % k / j);
    //printf("c)\t%d\n", 17 % k / j);
    //printf("c)\t%d\n", 8 / j);
    // yield same result, just breaking it down step by step


    i=1;
    j=2;
    k=3;
    printf("d)\t%d\n", (i + 5) % (j +2) / k);
    //printf("d)\t%d\n", 6 % 4 / k);
    //printf("d)\t%d\n", 2 / k);

    return 0;
}