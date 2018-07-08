#include <stdio.h>
#include <stdbool.h>
/**
 * Name:    11.c
 * Date:    2018 07 07
 * Author:  trittg
 * Project: 5.11 Pg. 97
 * Purpose: Asks a user for a two digit number, then prints the English word 
 *          for that number  
 */

int main (void)
{
    int tens, single;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &single);
    printf("You entered ");

    switch (tens) {                 // check first digit
        case 1:
            switch (single) {       // unusual teens (10-19) case
                case 0:
                    printf("ten.");
                    break;
                case 1:
                    printf("eleven.");
                    break;
                case 2:
                    printf("twelve.");
                    break;
                case 3:
                    printf("thirteen.");
                    break;
                case 4:
                    printf("fourteen.");
                    break;
                case 5:
                    printf("fifteen.");
                    break;
                case 6:
                    printf("sixteen.");
                    break;
                case 7:
                    printf("seventeen.");
                    break;
                case 8:
                    printf("eighteen.");
                    break;
                case 9:
                    printf("nineteen.");
                    break;
            }
            break;
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;   
    }

    if (tens > 1  && single != 0)       // hypen if 20 and above
        printf("-");
    
    if (tens != 1) {                    // check single digits
        switch (single) {
            case 1:
                printf("one.");
                break;
            case 2:
                printf("two.");
                break;
            case 3:
                printf("three.");
                break;
            case 4:
                printf("four.");
                break;
            case 5:
                printf("five.");
                break;
            case 6:
                printf("six.");
                break;
            case 7:
                printf("seven.");
                break;
            case 8:
                printf("eight.");
                break;
            case 9:
                printf("nine.");
                break;
            case 0:
                if (tens == 0)
                    printf("zero.");
                else
                    printf(".");
                break;
        }
    }

    return 0;
}