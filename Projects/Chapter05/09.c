#include <stdio.h>
/**
 * Name:    09.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.9 Pg. 97
 * Purpose: Prompts the user to enter two dates and then indicates which date
 *          comes earlier on the calendar
 */
#define FIRST 1
#define SAME 0
#define SECOND -1

int main(void)
{
    int d1_month, d1_day, d1_year;
    int d2_month, d2_day, d2_year;
    int compare; // -1 = second date, 0 = dates are equal, 1 = first date

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1_month, &d1_day, &d1_year);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2_month, &d2_day, &d2_year);

    if (d1_year < d2_year)            // compare years
        compare = FIRST;
    else if (d1_year > d2_year)
        compare = SECOND;
    else 
    {              
        if (d1_month < d2_month)        // compare months
            compare = FIRST;
        else if (d1_month > d2_month)
            compare = SECOND;
        else
        {          
            if (d1_day < d2_day)    // compare days
                compare = FIRST;
            else if (d1_day > d2_day)
                compare = SECOND;
            else
                compare = SAME;
        }
    }

    switch (compare) {
        case FIRST:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d",
                    d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
            break;
        case SECOND:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d",
                    d2_month, d2_day, d2_year, d1_month, d1_day, d1_year);
            break;
        case SAME:
            printf("%d/%d/%.2d is the same as than %d/%d/%.2d",
                    d1_month, d1_day, d1_year, d2_month, d2_day, d2_year);
    }        

    return 0;
}