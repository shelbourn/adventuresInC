/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/13/2018
    Subject: Udemy - Challenge 5 - Using the SizeOf Operator */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("The size of an int data type is: %d\n", sizeof(int));
    printf("The size of a char data type is: %d\n", sizeof(char));
    printf("The size of a long data type is: %d\n", sizeof(long));
    printf("The size of a long long data type is: %d\n", sizeof(long long));
    printf("The size of a double data type is: %d\n", sizeof(double));
    printf("The size of a long double data type is: %d\n", sizeof(long double));

    return 0;
}
