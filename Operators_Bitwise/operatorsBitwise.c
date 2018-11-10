/*  Author: Matthew Shelbourn
    Copyright 2018 Matthew Shelbourn
    Date: 11/08/2018
    Subject: Udemy - Bitwise Operators */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    // and (&) bitwise operator

    unsigned int a = 60; // 0011 1100 (60 in binary code)
    unsigned int b = 13; // 0000 1101 (13 in binary code)
    int result = 0;

    result = a & b; // a & b in binary is: 0000 1100 (values are only true if both a and b are true

    printf("The result of a & b is: %d\n", result);

    // or (|) bitwise operator

    unsigned int c = 45; // 0010 1101 (45 in binary code)
    unsigned int d = 76; // 0100 1100 (76 in binary code)
    int result2 = 0;

    result2 = c | d; // c | d in binary is: 0110 1101 (109)

    printf("The result of c | d is: %d\n", result2);

    // exclusive or (^) bitwise operator

    unsigned int e = 108; // 0110 1100 (108 in binary code)
    unsigned int f = 55; // 0011 0111 (55 in binary code)
    int result3 = 0;

    result3 = e ^ f; // e ^ f in binary is: 0101 1011 (91)

    printf("The result of e ^ f is: %d\n", result3);

    // complement (~) bitwise operator

    unsigned char g = 154; // 1001 1010 (154 in binary code)
    unsigned char h = 100; // 0110 0100 (100 in binary code)
    char j = 154; // 1001 1010 (154 in binary code)
    int result4 = 0;
    int result6 = 0;

    /*  The complement (~) bitwise operator flips the binary values from 1's to 0's
        and vice versa. In this example 'g' is unsigned meaning that it can have a
        positive or negative value. Because of this, ~g will use the 2's complement form
        [~g = -(g + 1)].

        The bitwise complement of 154 is 0110 0101 (101) and the 2's complement of 101 is
        -[1001 1011] (-155)

        There is a good explanation of this here:
        https://www.programiz.com/c-programming/bitwise-operators#complement */

    result4 = ~g;

    printf("The result of ~g is: %d\n", result4);

    /*  This example uses the complement (~) bitwise operator for a signed (positive) variable
        and therefore the output will be equal to the decimal value of the complement of 'j'. */

    result6 = ~j;

    printf("The result of ~j is: %d\n", result6);

    // left (<<) and right (>>) shift  bitwise operators

    unsigned int i = 80; // 0101 0000 (80 in binary code)
    int result5 = 0;

    result5 = i << 2; // shifts bits of i to left by two spaces
                     // 0001 0100 0000 (320) is the new value after the shift

    printf("The result of i << 2 is: %d\n", result5);

    return 0;
}
