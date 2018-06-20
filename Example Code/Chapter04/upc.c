#include <stdio.h>
/**
 * Name:    upc.c
 * Date:    2018 05 21
 * Author:  trittg
 * Section: 4.1 Pg. 57
 * Purpose: Calculate the check digit of a universal product code (barcode)
 *          that the user inputs in 3 parts
 */

int main(void)
{
    int first_digit, origin1, origin2, origin3, origin4, origin5, product1,
        product2, product3, product4, product5, first_sum, second_sum, total;
    
    printf("Enter the first (single) digit: ");
    scanf("%1d", &first_digit);
    printf("Enter the five digit manufaturer code: ");
    scanf("%1d%1d%1d%1d%1d", &origin1, &origin2, &origin3, &origin4, &origin5);
    printf("Enter the five digit product code: ");
    scanf("%1d%1d%1d%1d%1d", &product1, &product2, &product3, &product4,
                             &product5);

    first_sum = first_digit + origin2 + origin4 + origin5 + product1 + product3 
                + product5;
    second_sum = origin1 + origin3 + origin5 + product2 + product4;
    total = 3 * first_sum + second_sum; 

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}


