#include <stdio.h>
/**
 * Name:    04.c
 * Date:    2018 05 17
 * Author:  trittg
 * Project: 3.4 Pg. 50
 * Purpose: Formats phone number inputted by the user
 *          Outputs formatted phone number
 */

int main(void)
{
    int num1, num2, num3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &num1, &num2, &num3);
    printf("You entered %d.%d.%d", num1, num2, num3);

    return 0;
}