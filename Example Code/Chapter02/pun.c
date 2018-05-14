#include <stdio.h>
/**
 * Name:    pun.c
 * Date:    2018 05 14
 * Author:  trittg
 * Section: 2.1 Pg. 10
 * Purpose: Readers first program, simple output message  
 */

/*
    Anything with a # infront is a directive.  A preprocessor will obey any
    directive.  A preprocessor can add things to a program and make 
    modifications
    We are including the standrd input/output library, which allows us to use 
    it's printf function to print the text.
*/

int main(void)
{
    printf("To C or not to C: that is the question.\n");
    return 0;
}