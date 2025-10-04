#include <stdio.h>
int main()
{
    int input_numbers;
    int sum = 0;

    printf("Enter number of Elements : ");
    scanf("%d", &input_numbers);

    int array[input_numbers];

    for (int i = 0; i < input_numbers; i++)
    {
        printf("Enter the %dst value : ", i + 1);
        scanf("%d", &array[i]);

        sum = sum + array[i];
    }

    printf("Sum of total values is : %d", sum);

    return 0;
}