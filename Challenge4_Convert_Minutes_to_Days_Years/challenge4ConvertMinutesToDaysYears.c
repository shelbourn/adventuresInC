/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/12/2018
    Subject: Udemy - Challenge 4 - Convert Minutes to Days & Years */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    /* You can use the int data type for userDefinedMinutes, but ints are limited to how many
       bits they can store so you might want to use doubles or floats for larger numbers.
       Also, you can use double data types for the minutesInDay and minutesInYear values */

    int userDefinedMinutes;
    float minutesInDay = 60 * 24;
    float minutesInYear = 60 * 24 * 365;

    printf("Hi there! Please enter the number of minutes you would like converted into days and years.\n");

    scanf("%d", &userDefinedMinutes);

    /* Note: I tried listing the below variables in the top section with the rest, but I guess
       since C reads top-down it won't work and leaves the variables uninitiated or with zero
       values. */

    /* You can force the data to be less precise in this example by using the CAST operator.
       This can be done by changing the data type for days to an int and then use a cast for
       the minutesInDay variable -- int days = userDefinedMinutes / (int)minutesInDay */

    float days = (int)(userDefinedMinutes / minutesInDay);
    float years = userDefinedMinutes / minutesInYear;

    /* Below: the %0.3f is limiting the output to 3 decimal places */

    printf("%d minutes equals %0.3f days!\n", userDefinedMinutes, days);
    printf("%d minutes equals %0.3f years!\n\a", userDefinedMinutes, years);

    return 0;
}
