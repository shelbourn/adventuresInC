/* Walking through the scanf function */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[100]; // declared variable for string
    int i; // declared variable for number (integer)

    printf("Enter a number and a word:"); // requesting input from user

    scanf("%d %s", &i, str); // storing the entered data as integer (%d) and string (s) in variable (i) and string (str)

    printf("\nYou entered: %d and %s\n", i, str); //wrapping in \n and \n adds a line break

    return 0;
}
