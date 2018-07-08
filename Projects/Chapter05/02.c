#include <stdio.h>
#include <stdbool.h>
/**
 * Name:    02.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.2 Pg. 96
 * Purpose: Asks a user for 24 hour time, then converts to 12 hour form.
 */

int main(void)
{
    int hours = 0, minutes = 0;
    bool pm;
    
    printf("Enter the a 24 hour time (00:00): ");
    scanf ("%d:%d", &hours, &minutes);
    printf("Hours: %d \nMinutes: %d\n", hours, minutes);

    if (hours == 0) {
        hours = 12;
        pm = false;
    }
    else if (hours > 12) {
        hours -= 12;
        pm = true;
    }
    else
        pm = false;

    printf("Equivalent 24-hour time: %.2d:%.2d %s", hours, minutes,
            pm ? "PM": "AM");
    
    return 0;
}


