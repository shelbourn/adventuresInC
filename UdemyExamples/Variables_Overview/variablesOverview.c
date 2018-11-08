#include<stdio.h>

int main()
{
    int matt = 37; //declaring, naming, and assigning the variable 'matt'
    char str[100];

    matt = 38; //reassigning the value of variable 'matt'

    printf("I have your age recorded as %d:", matt); //interacting with user regarding age
    printf("\nIs this correct?\n");

    scanf("%s", str); //prompting user to confirm their age record

    printf("\nTo confirm, you entered: %s\n", str);

    return 0;
}
