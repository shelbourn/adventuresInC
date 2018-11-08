/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/05/2018
    Subject: Udemy C Programming for Beginners Challenge 3 - Enums */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // when defining enums you can change the order by assigning a value in the list. Eg YAHOO = 10. Then EBAY would be 11 and MICROSOFT would be 12.
    enum company {GOOGLE = 5, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT}; // defining the enums
    enum company google, facebook, xerox, yahoo, ebay, microsoft; // naming the variables

   google = GOOGLE;
   facebook = FACEBOOK;
   xerox = XEROX;
   yahoo = YAHOO;
   ebay = EBAY;
   microsoft = MICROSOFT;


    printf("Company number %d is XEROX\n", xerox);
    printf("Company number %d is GOOGLE\n", google);
    printf("Company number %d is EBAY\n\a", ebay); // escape sequences (\n) should go exactly where the action needs to take place

    return 0;
}
