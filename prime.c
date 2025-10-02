#include <stdio.h>
int main()
{
    int input_number;

    printf("Enter number to check : ");
    scanf("%d", &input_number);
    
    for (int i = 2; i < input_number; i++)
    {
        if (input_number % i == 0)
        {
            printf("%d is not Prime Number\n", input_number);
            break;
        }
        else
        {
            printf("%d is Prime number\n", input_number);
            break;
        }
    }

    return 0;
}