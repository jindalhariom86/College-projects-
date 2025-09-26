#include <stdio.h>
int main ()
{
    printf("Enter any year to check wheather a given year is Leap year or Not\n\n");
    
    //Getting Input
    printf("Enter year here : ");
    int year;
    scanf("%d", &year);

    //Checker
    if (year%4 == 0 && year%100 != 0)
    {
        printf("Given year is Leap year\n");
    }
    else if (year%100 == 0 && year%400 == 0)    
    {
        printf("Given year is Leap year\n");
    }
    else
    {
        printf("Given Year is not Leap Year\n");
    }
    
    
    
    return 0;
}