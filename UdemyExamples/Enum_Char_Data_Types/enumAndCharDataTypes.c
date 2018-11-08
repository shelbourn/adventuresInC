/* Author: Matthew Shelbourn
Copyright 2018 Matthew Shelbourn
Date: 11/04/2018
Subject: Enum & Char data type examples (Udemy) */

#include<stdio.h>

int main()
{
    // enum ********************************

    enum gender {male, female}; //declares enum as the data type and names what it will be enumerating along with enumeration options (male, female)
    enum gender myGender; //naming the enumeration variable
    enum gender nikkisGender;

    myGender = male; //assigning a value within gender options to the myGender variable

    printf("%d", myGender); //printing myGender to the console (will be displayed as "male's" place in the gender array - 0)

    nikkisGender = female;

    printf("\n%d\n", nikkisGender);

    // char *********************************

    char firstCharacter = 'A'; //char data types can only contain 1 character (escape statements count as one character)
    char escapeSequence1 = '\n'; //new line
    char escapeSequence2 = '\a'; //console alert

    printf("%c",firstCharacter);
    printf("%c", escapeSequence1);
    printf("%c", escapeSequence2);

    return 0;
}
