/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/07/2018
    Subject: Udemy - Logical Operators */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    _Bool a = 1; // true value in C. Any non-zero number is true and has a boolean value of 1
    _Bool b = 0; // false value in C. Any zero number is false and has a boolean value of 0
    _Bool result;

    _Bool c = 2;
    _Bool d = 0;
    _Bool result2;

    _Bool e = 4;
    _Bool f = 0;
    _Bool result3;

    _Bool g = 5;
    _Bool h = 0;
    _Bool result4;

    result = a && b; // tests to see is both a and b values are non-zero (true) integers

    printf("%d\n\n", result);

    result2 = b || c; // tests to see if either b or c values are non-zero (true) integers

    printf("%d\n\n", result2);

    result3 = !f; // returns the opposite value of the f variable (0) which is 1 (true)

    printf("%d\n\n", result3);

    result4 = !(g || h); // tests to see if either g or h is a non-zero integer (true) and then returns the opposite value

    printf("%d", result4);

    return 0;
}
