#include <stdio.h>
int main()
{
    int digit, remainder, sum;

    printf("Enter any digit : ");
    scanf("%d", &digit);
    
    sum = 0;

    while (digit != 0)
    {
        remainder = digit % 10;
        sum = sum + remainder;
        digit = digit / 10;
    }

    printf("%d\n", sum);

    return 0;
}
