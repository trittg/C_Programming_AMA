#include <stdio.h>
/**
 * Name:    04.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.4 Pg. 71
 * Purpose: User enters a number, program outputs number in base 8
 */

int main(void)
{
    int num, divisor, n1, n2, n3, n4, n5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    divisor = num;
    n5 = num % 8;
    n4 = (divisor /= 8) % 8;
    n3 = (divisor /= 8) % 8;
    n2 = (divisor /= 8) % 8;
    n1 = (divisor /= 8) % 8;

    printf("In octal, your number is : %d%d%d%d%d", n1, n2, n3, n4, n5);

    return 0;
}


