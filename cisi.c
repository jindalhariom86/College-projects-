#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
    printf("Enter 'c' to Calculate Compound Interest and 's' for Simple Interest : ");
    char i;
    scanf("%c", &i);
    if (i == 'c')
    {
        //  Compound Interest Calculator

        SetConsoleOutputCP(CP_UTF8);
        printf("\nHere is you favourite Coumpond Interest Calculator\n\n");
        printf("Please Enter your Principal Amount here (₹) : ");
        float prin;
        scanf("%f", &prin);
        printf("Now Enter Rate in Percentage (%%): ");
        float rate;
        scanf("%f", &rate);
        printf("Enter your Time in Years : ");
        float time;
        scanf("%f", &time);
        printf("Given Principal Amount is (₹): %.2f \n Given Rate is : %.2f %%\n Given Time in Years is : %.2f", prin, rate, time);
        float amo = prin * pow((1 + (rate / 100)), time);
        printf("\n\nYour Total Amount after %.2f Year : %.2f\n\n", time, amo);
        printf("\nHere is your Compound Interest : %.2f", amo - prin);
    }
    //Simple Intrest
    
    else if (i == 's')
    {
        SetConsoleOutputCP(CP_UTF8);
        printf("\nHere is you favourite Simple Interest Calculator\n\n");
        printf("Please Enter your Principal Amount here (₹) : ");
        float prin;
        scanf("%f", &prin);
        printf("Now Enter Rate in Percentage (%%): ");
        float rate;
        scanf("%f", &rate);
        printf("Enter your Time in Years : ");
        float time;
        scanf("%f", &time);
        printf("Given Principal Amount is (₹): %.2f \n Given Rate is : %.2f %%\n Given Time in Years is : %.2f", prin, rate, time);
        float amo = (prin*rate*time)/100;
        printf("\n\nYour Total Amount after %.2f Year : %.2f\n\n", time, amo+prin);
        printf("\nHere is your Simple Interest : %.2f", amo);
    }
    else
    {
        printf("Please enter 'C' for Compuond Interest and 'S' for Simple Interest\n");
    }
    return 0;
}