#include <stdio.h>
/**
 * Name:    06.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.6 Pg. 34
 * Purpose: User inputs a value for x
 *          Program outputs the polynomial expression result
 *          Program uses Horners rule to evaluate
 */

int main(void)
{
    float result, x;
    
    printf("3x^5 +2x^4 -5x^3 -x^2 +7x - 6\n");
    printf("Enter x value: ");
    scanf("%f", &x);
    
    result = ((((3 * x + 2) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6;

    printf("Result of polynomial: %.2f\n", result);

    return 0;
}