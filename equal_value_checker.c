#include <stdio.h>
int main()
{
    int first_num, second_num;

    printf("\n\nEnter value to check that both are equal or not\n\n");

    printf("Enter the First value : ");
    scanf("%d", &first_num);

    printf("Enter Second value : ");
    scanf("%d", &second_num);

    if (first_num == second_num)
    {
        printf("Entered value are equal\n");
    }
    else
    {
        printf("Given values are not Equal\n");
    }

    return 0;
}
