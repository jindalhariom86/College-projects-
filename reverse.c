#include <stdio.h>
int main()
{
    printf("\nEnter number here to get reverse of it\n\n");

    printf("Enter number here : ");
    int number;
    int digits[10];
    int i2 = 0;
    scanf("%d", &number);
    printf("The Reverse value is : ");
    for (int i = 0; number % 10 != 0; i++)
    {
        digits[i] = number % 10;
        number /= 10;
        i2 = i2+1;
    }
    for (int j = 0; j < i2; j++)
    {
        printf("%d", digits[j]);
    }    

    return 0;
}