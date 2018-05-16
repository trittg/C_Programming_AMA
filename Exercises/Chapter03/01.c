#include <stdio.h>
/**
 * Name:    01.c
 * Date:    2018 05 16
 * Author:  trittg
 * Exercise: 3.1 Pg. 49
 * Purpose: outputs of formatted strings
 */

int main(void)
{
    printf("%6d, %4d\n", 86, 1040);     // 6 and 4 characters minimum
    printf("%15.5e\n", 30.253);         // 15 characters min, 5 .precision
    printf("%.4f\n", 83.162);           // 4 precision
    printf("%-6.2g\n", .0000009979);    // 6 characters min, 2 sig fig max

    return 0;
}
