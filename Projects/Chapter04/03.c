#include <stdio.h>
/**
 * Name:    03.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.3 Pg. 71
 * Purpose: User enters a 3 digit number, program outputs number reversed
 *          Reversed number calculated without arithmetic
 */

int main(void)
{
    int first, middle, last;

    printf("Enter a 3 digit number: ");
    scanf("%1d%1d%1d", &first, &middle, &last);
    printf("The Reversal is:        %d%d%d\n", last, middle, first);

    return 0;
}


