#include <stdio.h>
/**
 * Name:    06.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.5 Pg. 71
 * Purpose: Rewrite the upc.c program so that it works with the European Article
 *          Number (EAN)
 */

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7,
        n8, n9, n10, n11, n12, odd_sum, even_sum, total;
    
    printf("Enter the odd 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6,
                                                  &n7, &n8, &n9, &n10, &n11,
                                                  &n12);

    odd_sum = n1 + n3 + n5 + n7 + n9 + n11;
    even_sum = n2 + n4 + n6 + n8 + n10 + n12;
    total = 3 * even_sum + odd_sum;
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}


