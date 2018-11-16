/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/15/2018
    Subject: Udemy - Switch Statement Example 2 - Switch with user input */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Please enter your expression:\n");
    scanf("%f, %c, %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%0.2f\n", value1 + value2);
            break;

        case '-':
            printf("%0.2f\n", value1 - value2);
            break;

        case '*':
            printf("%0.2f\n", value1 * value2);
            break;

        case '/':
            if(value2 == 0){
                printf("ERROR. Cannot have a denominator of zero.\n");
            }
            else
                printf("%0.2f\n", value1 / value2);
            break;

        default:
            printf("ERROR. Unknown operator.\n");
            break;
    }


    return 0;
}
