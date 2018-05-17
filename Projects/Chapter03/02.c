#include <stdio.h>
/**
 * Name:    02.c
 * Date:    2018 05 17
 * Author:  trittg
 * Project: 3.2 Pg. 50
 * Purpose: Formats product information inputted by the user
 *          Outputs formatted info
 */

int main(void)
{
    int month, day, year, item_num;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy)");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("Number\tPrice\tDate\n");
    printf("%d\t$%7.2f\t%d/%d/%d", item_num, unit_price, month, day, year);

    return 0;
}


