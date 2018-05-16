#include <stdio.h>
/**
 * Name:    08.c
 * Date:    2018 05 15
 * Author:  trittg
 * Project: 2.8 Pg. 35
 * Purpose: Calculate the remaining balance on a loan after the first second
 *          and third payments
 */

int main(void)
{
    float balance, interest, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest = (interest/100)/12 + 1;
    balance -= monthly_payment;
    balance *= interest;
    printf("Balance remaining after 1st monthly payment:\t%.2f\n", balance);
    balance -= monthly_payment;
    balance *= interest;
    printf("Balance remaining after 2nd monthly payment:\t%.2f\n", balance);
    balance -= monthly_payment;
    balance *= interest;
    printf("Balance remaining after 3rd monthly payment:\t%.2f\n", balance);

    return 0;
}