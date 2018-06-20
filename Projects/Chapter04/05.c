#include <stdio.h>
/**
 * Name:    05.c
 * Date:    2018 06 20
 * Author:  trittg
 * Project: 4.5 Pg. 71
 * Purpose: Rewrite the upc.c program so that the user enters 11 digits at the 
 *          same time 
 */

int main(void)
{
    int first_digit, origin1, origin2, origin3, origin4, origin5, product1,
        product2, product3, product4, product5, first_sum, second_sum, total;
    
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first_digit, &origin1, &origin2,
                                            &origin3, &origin4, &origin5,
                                            &product1, &product2, &product3,
                                            &product4, &product5);

    first_sum = first_digit + origin2 + origin4 + origin5 + product1 + product3 
                + product5;
    second_sum = origin1 + origin3 + origin5 + product2 + product4;
    total = 3 * first_sum + second_sum; 

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}


