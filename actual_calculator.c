#include <stdio.h>
// #include <windows.h>
int main()
{
    char i;
    printf("Enter first number : ");
    float first_number;
    scanf("%f", &first_number);
    printf("Enter operation : ");
    scanf(" %c", &i);
    printf("Enter second number : ");
    float second_number;
    scanf("%f", &second_number);

    switch (i)
    {
    case '+':
        printf("\nHere is your Result of addition of two numbers : %f", first_number + second_number);
        break;

    case '-':
        printf("\nHere is your Result of Substraction of two Numbers : %f", first_number - second_number);
        break;

    case '*':
        printf("\nHere is your Result of Multiplication of two Numbers : %f", first_number * second_number);
        break;
    case '/':

        if (second_number == 0)
        {
            printf("\nNot Defined");
        }
        else
        {
            printf("\nHere is your Result of Dividation of two Numbers : %f", first_number / second_number);
        }
        break;

    default : 
    printf("\nInvalid Operation");
    }
    return 0;
}