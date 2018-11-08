/* Author: Matthew Shelbourn
Copyright 2018 Matthew Shelbourn
Date: 11/04/2018
Subject: C Programming for Beginners (Udemy) Challenge 2 - Area & Perimeter of a Rectangle */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double width;
    double height;
    double perimeter;
    double area;

    width = 25;
    height = 32.75;

    perimeter = (width * 2) + (height * 2); //more efficient to write as 2 * (width + height)
    area = width * height;

    printf("The width of this rectangle is: %f\n", width);
    printf("The height of this rectangle is: %f\n", height);
    printf("The area of this rectangle is: %f\n", area);
    printf("The perimeter of this rectangle is: %f\n\a", perimeter);

    /* To print multiple outputs on the same line use:
    printf("Height is: %f, Width is: %f, Perimeter is: %f, Area is: %f\n", height, width, perimeter, area);
    */

    /* To limit the number of decimal places displayed in the console for a float use:
    printf("Height is: %.2f", height) for 2 decimal places or printf("Width is: %.3f", width) for 3 decimal places;
    */

    return 0;
}
