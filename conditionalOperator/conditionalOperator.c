/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/14/2018
    Subject: Example use of the conditional operator (ternary operator - 3 operands) */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x;
    int y = 2;

    /*  The below if-else statement uses the conditional operator, which is a ternary operator
        because it has 3 operands. In this example, the statement is shorthand for "If y is less
        than 3 then assign 32 to x. Else, assign 8 to x. X is not part of the actual conditional
        statement, it's value is being assigned based on the output of the if-else statement. */

    x = y < 3 ? 32 : 8; // using the conditional operator ? :

    printf("%i", x);


    return 0;
}
