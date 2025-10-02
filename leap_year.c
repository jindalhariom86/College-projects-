#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year to check wheather a given year is Leap year or Not\n\n");

    printf("Enter year here : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("Given year is Leap year\n");
    }
    else if (year % 400 == 0)
    {
        printf("Given year is Leap year\n");
    }
    else
    {
        printf("Given Year is not Leap Year\n");
    }

    return 0;
}
