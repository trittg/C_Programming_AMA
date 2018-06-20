#include <stdio.h>
/**
 * Name:    08.c
 * Date:    2018 06 19
 * Author:  trittg
 * Exercise: 4.8 Pg. 69
 * Purpose: Alternate UPC checker
 */

int main(void)
{
    int total = 18;
    printf("Total   \t%d\n", total);
    printf("Original\t%d\n", 9  - ((total - 1)  % 10));
    printf("New     \t%d\n", 10 -  (total % 10) % 10);

    return 0;
}