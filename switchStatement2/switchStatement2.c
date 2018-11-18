/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/15/2018
    Subject: Udemy - Switch Statement Example 2 - Switch with user input */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float value1, value2;
    char operator;

    printf("Please enter your expression:\n");
    scanf("%f %c %f", &value1, &operator, &value2); // MAKE SURE THESE ARE NO COMMAS IN BETWEEN FORMAT SPECIFIERS

    switch(operator) // no semicolon needed when calling a switch statement
    {
        case '+': // colon after each swith case
            printf("%.2f\n", value1 + value2);
            break;

        case '-':
            printf("%.2f\n", value1 - value2);
            break;

        case '*':
            printf("%.2f\n", value1 * value2);
            break;

        case '/':
            if(value2 == 0){
                printf("ERROR. Cannot have a denominator of zero.\n");
            }
            else
                printf("%.2f\n", value1 / value2);
            break;

        default: // default is the equivalent to the 'else' in an if-else statement
            printf("ERROR. Unknown operator.\n");
            break;
    }


    return 0;
}
