#include <stdio.h>
/**
 * Name:    03.c
 * Date:    2018 05 17
 * Author:  trittg
 * Project: 3.3 Pg. 50
 * Purpose: Formats ISBN information inputted by the user
 *          Outputs formatted info
 */

int main(void)
{
    int gs1, group_id, publisher_code, item_num, check_digit;

    printf("Enter ISBN (x-x-x-x-x): ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group ID: %d\n", group_id);
    printf("Publisher Code: %d\n", publisher_code);
    printf("Item Number: %d\n", item_num);
    printf("Check Digit: %d\n", check_digit);

    return 0;
}


