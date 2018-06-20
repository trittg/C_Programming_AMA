#include <stdio.h>
/**
 * Name:    01.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.1 Pg. 71
 * Purpose: User enters a 2 digit number, program outputs number reversed
 *          Reversed number calculated through operators
 */

int main(void)
{
    int initial, first, last;

    printf("Enter a 2 digit number: ");
    scanf("%2d", &initial);
    first = initial / 10;
    last = initial % 10;
    printf("Reversed:    %d%d\n", last, first);

    return 0;
}


