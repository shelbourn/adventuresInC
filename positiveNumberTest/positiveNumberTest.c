/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/14/2018
    Subject: Program to test if a number is positive, zero, or negative */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int numberToTest, sign;

    printf("Enter a number to test: ");
    scanf("%i", &numberToTest);

    if (numberToTest < 0){
        sign = -1;
        printf("\nThis number is negative.");
    }

    else if (numberToTest == 0){
        sign = 0;
        printf("\nThis number is equal to zero.");
    }
    else {
        sign = 1; //number must be positive by deduction
        printf("\nThis number is positive.");
    }

    printf("\nSign = %i", sign);


    return 0;
}
