#include <stdio.h>
/**
 * Name:    01.c
 * Date:    2018 05 17
 * Author:  trittg
 * Project: 3.1 Pg. 50
 * Purpose: User inputs a date, program outputs in new form
 */

int main(void)
{
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%d%d", year, month, day);
    return 0;
}


