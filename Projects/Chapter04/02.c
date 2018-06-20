#include <stdio.h>
/**
 * Name:    02.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.2 Pg. 71
 * Purpose: User enters a 3 digit number, program outputs number reversed
 *          Reversed number calculated with arithmetic
 */

int main(void)
{
    int initial, first, middle, last;

    printf("Enter a 3 digit number: ");
    scanf("%3d", &initial);
    first = initial / 100;
    middle = initial / 10 % 10;
    last = initial % 10;
    printf("The Reversal is:        %d%d%d\n", last, middle, first);

    return 0;
}


