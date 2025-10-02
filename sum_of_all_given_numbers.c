#include <stdio.h>
int main()
{
    int numbers;
    float sum;

    printf("Enter how many numbers you want to Add : ");
    scanf("%d", &numbers);

    float all_numbers[numbers];
    sum = 0;

    for (int i = 0; i < numbers; i++)
    {
        printf("Enter %dst Number : ", i + 1);
        scanf("%f", &all_numbers[i]);

        sum += all_numbers[i];
    }

    printf("Here is the sum of all given Numbers : %.2f", sum);

    return 0;
}
