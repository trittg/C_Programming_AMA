#include <stdio.h>
/**
 * Name:    01.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.1 Pg. 95
 * Purpose: Calculates how many digits a number contains
 */

int main(void)
{
    int input;
    int digits = 0;

    printf("Enter a number: ");
    scanf ("%d", &input);
    printf("The number %d has ", input);
    /*
        num is not greater than 9999, account for negative values
        note I rely on the short circuit property of the if else statements
        while 9 may satisfy 4 of the if statements it will only execute the code
        in the first if statement.
    */ 
    if (input < 10 && input > -10)
        printf("1 digit");
    else if (input < 100 && input > -100)
        printf("2 digits");
    else if (input < 1000 && input > -1000)
        printf("3 digits");
    else if (input < 10000 && input > -10000)
        printf("4 digits");
    else
        printf("too many digits...");

    return 0;
}


