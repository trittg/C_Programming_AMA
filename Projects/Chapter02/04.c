#include <stdio.h>
#define TAX .05f
/**
 * Name:    04.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.4 Pg. 34
 * Purpose: User inputs a dollar amount and program applies 5% tax and outputs
 *          new amount
 */

int main(void)
{
    float amount;
    
    printf("Apply %.2f tax.\nEnter dollar and cents amount: ", TAX);
    scanf("%f", &amount);
    
    amount += amount * TAX;

    printf("With tax added: %.2f\n", amount);

    return 0;
}