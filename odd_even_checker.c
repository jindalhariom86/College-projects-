#include <stdio.h>
int main()
{
    //Intro
    printf("\nHere is Odd Even checker\n\n");
    
    //Getting Input
    printf("Enter any Number to Check Odd Or Even : ");
    int a;
    scanf("%d", &a);

    //Checker
    if (a%2 == 1)
    {
        printf("\nYour Number is 'Odd'");
    }
    else{
        printf("\nYour Number is 'Even'");
    }
    return 0;
}