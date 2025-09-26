#include <stdio.h>
int main()
{
    printf("Enter how many numbers you want to Add : ");
    int numbers;
    scanf("%d", &numbers);
    float all_numbers[numbers];
    float sum = 0;
    for (int i = 0; i < numbers; i++)
    {        
        printf("Enter %dst Number : ", i+1);
        scanf("%f", &all_numbers[i]);
        sum += all_numbers[i];        
    }
    printf("Here is the sum of all given Numbers : %f", sum);
    
    return 0;
}