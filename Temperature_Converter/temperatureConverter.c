/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/13/2018
    Subject: Temperature Converter (Fahrenheit to Celcius & vice versa) */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Fahrenheit to Celcius conversion

    float givenFahrenheit = 0;

    printf("Hi there! Please provide me with a temperature in Fahrenheit that you would like converted to Celcius.\n");

    scanf("%f", &givenFahrenheit);

    float calculatedCelcius = (givenFahrenheit - 32) * 5 / 9;

    printf("\n%0.2f degrees Fahrenheit is equal to %0.2f degrees Celcius!\n\n\a", givenFahrenheit, calculatedCelcius);

    // Celcius to Fahrenheit Conversion

    float givenCelcius = 0;

    printf("Now please provide me with a temperature in Celcius that you would like converted to Fahrenheit.\n");

    scanf("%f", &givenCelcius);

    float calculatedFahrenheit = (givenCelcius * 9/5) + 32;

    printf("\n%0.2f degrees in Celcius is equal to %0.2f degrees in Fahrenheit!\n\a", givenCelcius, calculatedFahrenheit);

    return 0;
}
