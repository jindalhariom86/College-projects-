#include <stdio.h>
int main ()
{
    printf("Enter any digit : ");
    int digit;
    int remainder;
    int sum = 0;
    scanf("%d", &digit);  
    while (digit!=0)
    {
        remainder = digit%10;
        sum = sum + remainder;
        digit = digit/10;
    }
    printf("%d\n", sum);
    
    return 0;
}