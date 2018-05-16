#include <stdio.h>
/**
 * Name:    02.c
 * Date:    2018 05 16
 * Author:  trittg
 * Exercise: 3.2 Pg. 49
 * Purpose: calls of specific formmated strings
 */

int main(void)
{
    float x = 123456789.123456789;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);
    
    return 0;
}
