#include <stdio.h>
/**
 * Name:    06.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.6 Pg. 96
 * Purpose:  Modify the upc.c program from section 4.1 to check for valid UPC
 */

int main(void)
{
    int first_digit, origin1, origin2, origin3, origin4, origin5, product1,
        product2, product3, product4, product5, first_sum, second_sum, total;
    int check_digit;
    printf("Enter the first (single) digit: ");
    scanf("%1d", &first_digit);
    printf("Enter the five digit manufaturer code: ");
    scanf("%1d%1d%1d%1d%1d", &origin1, &origin2, &origin3, &origin4, &origin5);
    printf("Enter the five digit product code: ");
    scanf("%1d%1d%1d%1d%1d", &product1, &product2, &product3, &product4,
                             &product5);
    printf("Enter the last digit (check digit): ");
    scanf("%1d", &check_digit);

    first_sum = first_digit + origin2 + origin4 + origin5 + product1 + product3 
                + product5;
    second_sum = origin1 + origin3 + origin5 + product2 + product4;
    total = 3 * first_sum + second_sum; 

    printf("%s\n", (9 - ((total - 1) % 10)) == check_digit ?
                   "VALID" : "NOT-VALID");

    return 0;
}