#include <stdio.h>
int main()
{
    int a;
    unsigned long long result = 1;

    printf("\n\nHere is your Factorial Calculator\n\n");

    printf("Enter Number : ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Factorial of Negative value can not be defined!");
    }
    else
    {

        for (int i = 1; i <= a; i++)
        {
            result = result * i;
        }

        printf("The Factorial Of the Given Value is : %llu", result);
    }

    return 0;
}
