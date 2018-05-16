#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

/**
 * Name:    07.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.7 Pg. 34
 * Purpose: User inputs a dollar amount
 *          Program outputs smallest amount of bills required to make the amount
 */

int main(void)
{
    int amount, bill_20, bill_10, bill_5, bill_1;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    bill_20 = amount / TWENTY;
    amount -= bill_20 * TWENTY;
    printf("$20 bills:\t%d\n", bill_20);
    bill_10 = amount / TEN;
    amount -= bill_10 * TEN;
    printf("$10 bills:\t%d\n", bill_10);
    bill_5 = amount / FIVE;
    amount -= bill_5 * FIVE;
    printf("$5  bills:\t%d\n", bill_5);
    bill_1 = amount / ONE;
    amount -= bill_1 * ONE;
    printf("$1  bills:\t%d\n", bill_1);
    
    return 0;
}