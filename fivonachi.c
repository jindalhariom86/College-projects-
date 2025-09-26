#include <stdio.h>
int main ()
{
    printf("Enter number to print first N fibonacci numbers : ");
    int number;
    scanf("%d", &number);
    int N_t = number-1;
    long long final_result[number];
    final_result[0]= 0;
    final_result[1] = 1;
    printf("0, 1,");
    for (int i = 2; i <= N_t; i++)
    {
        final_result[i] = final_result[i-1]+final_result[i-2];
        printf(" ,%lld",final_result[i]);
    }
    
    
    return 0;
}