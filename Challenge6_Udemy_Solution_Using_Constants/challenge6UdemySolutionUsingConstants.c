/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/19/2018
    Subject: Udemy Challenge 6 - Control Flow - Calculate Weekly Pay - Udemy Solution */

#include<stdio.h>
#include<stdlib.h>

/*  Constants are variables that are pre-processor directives (start with the # symbol) and are defined for the entire
    program. They are defined before the int main() call and the syntax is as follows:
    #define CONSTANTNAMEINALLCAPS value (no operator needed). Constants make it very easy to
    change a variable instance throughout an entire program because it only needs to be
    changed once. Constants can be assigned any type of data -- floating point, integers,
    strings, etc. */

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REMAINDER 0.25
#define OVERTIME 40

int main(void)
{
    // declaring variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours worked this week: ");

    // acquiring and storing the input
    scanf("%i", &hours); // & is ONLY NOT necessary for strings in scanf functions.

    // calculate the gross pay
    if (hours <= 40)
        grossPay = hours * PAYRATE;

    else{
        grossPay = 40 * PAYRATE;
        double overtimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overtimePay; // grossPay = grossPay + overtimePay
    }

    // calculate the taxes
    if (grossPay <= 300)
        taxes = grossPay * TAXRATE_300;

    else if (grossPay > 300 && grossPay <= 450){
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }

    else{
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REMAINDER;
    }

    // calculate net pay
    netPay = grossPay - taxes;

    // display output
    printf("\nHere are your paycheck details:\n\nHours Worked: %i\nGross Pay: %.2f\nTotal Taxes: %.2f\nNetpay: %.2f", hours, grossPay, taxes, netPay);

    /*  Make sure to perform multiple tests to test all scenarios. In this case we had cases
        overtime, without overtime, and different tax rates. Test all to make sure program works
        as intended. */

    return 0;
}
