#include <stdio.h>
/**
 * Name:    06addfrac2.c
 * Date:    2018 05 16
 * Author:  trittg
 * Section: 3.6 Pg. 46
 * Purpose: Modify addfrac.c to allow the user to enter a space before and after
 *          the / for the fractions
 */

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter first fraction (num/denom): ");
    scanf("%d / %d", &num1, &denom1);
    printf("Enter second fraction (num/denom): ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("Result: %d/%d\n", result_num, result_denom);

    return 0;
}


