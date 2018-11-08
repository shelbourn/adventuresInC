/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/06/2018
    Subject: Udemy - Operators */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 33;
    int b = 15;
    double c = 42.3;
    double d = 12.78;
    int result = 0;
    double result2 = 0;

    // addition
    result = a + b;

    printf("Result equals %d\n", result);

    // multiplication and division
    result2 = (c * d)/b;

    printf("Result 2 equals %f\n", result2);

    // modulus and remainder
    result = a % b;
    printf("Modulus result equals %d\n", result);

    // increment and decrement prefix
    result = a;
    printf("Result of increment equals %d\n", ++a); // increments before the statement is run

    // increment and decrement postfix
    result = b;
    printf("Result of increment equals %d\n", b++); // increments after the statement and will show in next iteration of 'b'

    // 'a++' is an example of a unary operator because there is only one operand. The others are binary operators

    return 0;
}
