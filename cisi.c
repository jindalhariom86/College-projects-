#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
    char i;
    float prin, rate, time, amount;

    printf("Enter 'c' to Calculate Compound Interest and 's' for Simple Interest : ");

    scanf("%c", &i);
    if (i == 'c')
    {
        //  Compound Interest Calculator

        SetConsoleOutputCP(CP_UTF8);
        printf("\nHere is your favourite Coumpond Interest Calculator\n\n");


        printf("Please Enter your Principal Amount here (₹) : ");
        scanf("%f", &prin);
        
        printf("Now Enter Rate in Percentage (%%): ");
        scanf("%f", &rate);
        
        printf("Enter your Time in Years : ");
        scanf("%f", &time);
        
        printf("\nGiven Principal Amount is (₹): %.2f \n Given Rate is : %.2f %%\n Given Time in Years is : %.2f", prin, rate, time);
        amount = prin * pow((1 + (rate / 100)), time);
        
        printf("\nHere is your Compound Interest : %.2f", amount - prin);

        printf("\n\nYour Total Amount after %.2f Year : %.2f\n\n", time, amount);
    }

    else if (i == 's')
    {
        // Simple Intrest
        SetConsoleOutputCP(CP_UTF8);
        printf("\nHere is you favourite Simple Interest Calculator\n\n");
        
        
        printf("Please Enter your Principal Amount here (₹) : ");
        scanf("%f", &prin);
        
        printf("Now Enter Rate in Percentage (%%): ");
        scanf("%f", &rate);
        
        printf("Enter your Time in Years : ");
        scanf("%f", &time);
        
        printf("Given Principal Amount is (₹): %.2f \n Given Rate is : %.2f %%\n Given Time in Years is : %.2f", prin, rate, time);
        amount = (prin * rate * time) / 100;
        
        printf("\nHere is your Simple Interest : %.2f", amount);

        printf("\n\nYour Total Amount after %.2f Year : %.2f\n\n", time, amount + prin);        
    }

    else
    {
        printf("Please enter 'C' for Compuond Interest and 'S' for Simple Interest\n");
    }

    return 0;
}