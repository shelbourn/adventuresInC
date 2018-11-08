/* Author: Matthew Shelbourn
Copyright 2018 Matthew Shelbourn
Date: 11/04/2018
Subject: Command Line Argument examples (Udemy) */

#include<stdio.h>

// int main(int argc, char *argv[]) allow you to pass data to the program and through the command line via the IDE. Allows data to be collected without input from the user.

int main(int argc, char *argv[]) //argc = argument count, argv = additional arguments according to their array [] position
{
    int numberOfArguments = argc;
    char *argument1 = argv[0]; //argv[0] will always be the name of the program
    char *argument2 = argv [1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
