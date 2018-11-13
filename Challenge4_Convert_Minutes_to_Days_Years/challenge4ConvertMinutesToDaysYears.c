/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/12/2018
    Subject: Udemy - Challenge 4 - Convert Minutes to Days & Years */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float userDefinedMinutes;
    float minutesInDay = 60 * 24;
    float minutesInYear = 60 * 24 * 365;

    printf("Hi there! Please enter the number of minutes you would like converted into days and years.\n");

    scanf("%f", &userDefinedMinutes);

    /* Note: I tried listing the below variables in the top section with the rest, but I guess
       since C reads top-down it won't work and leaves the variables uninitiated or with zero
       values. */

    float days = userDefinedMinutes / minutesInDay;
    float years = userDefinedMinutes / minutesInYear;

    /* Below: the %0.3f is limiting the output to 3 decimal places */

    printf("%0.3f minutes equals %0.3f days and %0.3f years!\n\a", userDefinedMinutes, days, years);

    return 0;
}
