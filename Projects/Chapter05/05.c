#include <stdio.h>
/**
 * Name:    05.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.5 Pg. 96
 * Purpose: Income tax, user enters amount of taxable income, then 
 *          program displays tax due
 */

int main(void)
{
    float income, tax;
    tax = 0;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income < 750)
        tax = income * .01f;
    else if (income < 2250)
        tax = 7.5f + .02f * (income - 750);
    else if (income < 3750)
        tax = 37.5f + .03f * (income - 2250);
    else if (income < 5250)
        tax = 82.5f + .04f * (income - 3750);
    else if (income < 7000)
        tax = 142.5f + .05f * (income - 5250);
    else
        tax = 230.0f + .06f * (income - 7000);
    
    printf("Tax due: $%.2f", tax);

    return 0;
}