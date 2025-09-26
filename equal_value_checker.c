#include <stdio.h>
int main()
{
    //Intro 
    printf("\n\nEnter value to check that both are equal or not\n\n");
    // Getting Input
    printf("Enter the First value : ");
    int first, second;
    scanf("%d", &first);
    printf("Enter Second value : ");
    scanf("%d", &second);

    //Checker
    if (first==second)
    {
        printf("Entered value are equal\n");
    }
    else
    {
        printf("Given values are not Equal\n");
    }
    
    
    return 0;
}