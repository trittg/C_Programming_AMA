#include <stdio.h>
/**
 * Name:    10.c
 * Date:    2018 07 05
 * Author:  trittg
 * Project: 5.10 Pg. 97
 * Purpose: Using a switch statement, convert a numerical grade into a letter
 *          grade 
 */

int main (void)
{
    int grade;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0)
        printf("ERROR: Grade out of range.");
    else {
        grade /= 10;

        printf("Letter grade: ");
        switch(grade) {
            case (9): case (10):
                printf("A");
                break;
            case (8):
                printf("B");
                break;
            case (7):
                printf("C");
                break;
            case (6):
                printf("D");
                break;
            default:
                printf("F");
                break;
        }
    }

    return 0;
}