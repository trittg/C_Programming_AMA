#include <stdio.h>
/**
 * Name:    03.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.3 Pg. 96
 * Purpose: Modify the broker.c program
 */

int main(void)
{
    float commission, value, shares, price, rival;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter price per share: ");
    scanf("%f", &price);
    value = shares * price;
    
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    if (shares > 2000)
        rival = 33 + .03f * shares;
    else 
        rival = 33 + .02f * shares;
    
    printf("Rival Broker: $%.2f\n", rival);

    return 0;
}