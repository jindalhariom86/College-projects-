#include <stdio.h>
int main()
{
    int a;
    printf("\nHere is Odd Even checker\n\n");

    printf("Enter any Number to Check Odd Or Even : ");
    scanf("%d", &a);

    if (a % 2 == 1)
    {
        printf("\nGiven Number is 'Odd'");
    }
    else
    {
        printf("\nGiven Number is 'Even'");
    }

    return 0;
}
