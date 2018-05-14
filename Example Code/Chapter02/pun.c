#include <stdio.h>
/**
 * Example Program from C Programming a modern Approach by K. N. King
 * 2.1 Pg. 10
 * Readers first program, simple output message 
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