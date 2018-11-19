/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/18/2018
    Subject: Udemy - Challenge 6 - Control Flow: Determine Amount of Pay */

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int standardPayRate = 12;
    float overtimePayRate = (12 * 1.5);
    int hoursWorked;
    float tax15 = 0.85;
    float tax20 = 0.80;
    float tax25 = 0.75;
    float grossPay;
    float netPay;

    printf("How many hours did you work this week, dude?\n\n");
    scanf("%i", &hoursWorked);

    // calculating the gross pay with standard and overtime pay

    if (hoursWorked <= 40){
        grossPay = hoursWorked * standardPayRate;
    }
    else
        grossPay = ((40 * standardPayRate) + ((hoursWorked - 40) * overtimePayRate));

    // calculating the net pay after taxes based on the gross pay tier

    if (grossPay <= 300){
        netPay = grossPay * tax15;
    }
    else if (grossPay > 300 && grossPay <= 450){
        netPay = ((300 * tax15) + ((grossPay - 300) * tax20));
    }
    else
        netPay = ((300 * tax15) + (150 * tax20) + ((grossPay - 450) * tax25));

    // printing the net pay based on the hours worked to the console

    printf("You worked %i hours this week which means that your after tax pay will be $%.2f. Have fun with the money!\n\a", hoursWorked, netPay);

    return 0;
}
