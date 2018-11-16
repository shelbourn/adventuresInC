/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/15/2018
    Subject: Udemy - Switch Statement Example */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    enum daysOfWeek {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum daysOfWeek today = Saturday;

    switch(today) //today is the expression being tested in each case
    {
        case Sunday:
            printf("Today is Sunday."); //printed if today variable is Sunday
            break;

        case Monday:
            printf("Today is Monday.");
            break; // necessary to prevent next statement from running also

        case Tuesday:
            printf("Today is Tuesday.");
            break; // no braces needed within case

        case Wednesday:
            printf("Today is Wednesday.");
            break;

        case Thursday:
            printf("Today is Thursday.");
            break;

        case Friday:
            printf("Today is Friday.");
            break;

        default:
            printf("Today must be Saturday."); // equivalent to the 'else' statement.
            break;
    } // braces needed at the beginning and end of a switch statement

    return 0;
}
