/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/14/2018
    Subject: Program to test if a given number is even */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numberToTest, remainder;

    printf("Enter your number to be tested.\n\n");
    scanf("%d", &numberToTest);

    remainder = numberToTest % 2;

    if (remainder == 0)
    {
        printf("This number is even.\n");
    }

    else
    {
        printf("This number is odd.");
    }

    return 0;
}
