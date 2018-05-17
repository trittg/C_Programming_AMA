#include <stdio.h>
/**
 * Name:    06.c
 * Date:    2018 05 17
 * Author:  trittg
 * Project: 3.6 Pg. 51
 * Purpose: Modify addfrac.c to take in both fractions at once, seperated by +
 */

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is: %d/%d\n", result_num, result_denom);

    return 0;
}