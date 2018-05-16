#include <stdio.h>
/**
 * Name:    03.c
 * Date:    2018 05 16
 * Author:  trittg
 * Exercise: 3.3 Pg. 49
 * Purpose: calls of specific formmated strings
 */

int main(void)
{
    int x1, x2, x3;
    int y1, y2, y3;
    float f1, f2;
    float g1, g2;

    /*
    printf("Enter integer: ");
    scanf("%d", &x1);
    
    printf("Enter the same integer: ");
    scanf(" %d", &y1);

    printf("|%d|%d|\n", x1, y1);
    */

    /*
    printf("Enter d-d-d: ");
    scanf("%d-%d-%d", &x1, &x2, &x3);
    
    printf("Enter d-d-d: ");
    scanf("%d -%d -%d", &y1, &y2, &y3);

    printf("%d-%d-%d\n", x1, x2, x3);
    printf("%d-%d-%d\n", y1, y2, y3);
    */

    /*
    printf("Enter Float: ");
    scanf("%f", &f1);

    printf("Enter Float: ");
    scanf("%f ", &g1);

    printf("|%f|%f|", f1, g1);
    */

    printf("Enter f,f: ");
    scanf("%f,%f", &f1, &f2);

    printf("Enter f,f: ");
    scanf("%f, %f ", &g1, &g2);

    printf("|%f|%f|", f1, g1);

    return 0;
}
