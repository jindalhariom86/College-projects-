#include <stdio.h>
int main ()
{
    printf("Enter to which number you want Sum : ");
    int n;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d number is : %d", n, sum);
    return 0;
}