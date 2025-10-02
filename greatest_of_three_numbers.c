#include <stdio.h>
int main()
{
    int a, b, c;
    
    printf("\nEnter Three Nimbers to check Greatest of three Numbers\n\n");

    printf("Enter value of 'a' here : ");
    scanf("%d", &a);

    printf("Enter value of 'b' Here : ");
    scanf("%d", &b);

    printf("Enter value of 'c' here : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("Order is a>b>c\n");
        }
        else if (c > b)
        {
            printf("Order is a>c>b\n");
        }
    }
    else if (b > a && b > c)
    {
        if (c > a)
        {
            printf("b>c>a\n");
        }
        else if (a > c)
        {
            printf("b>a>c\n");
        }
    }
    else if (c > b && c > a)
    {
        if (a > b)
        {
            printf("c>a>b \n");
        }
        else if (b > a)
        {
            printf("Order is c>b>a \n");
        }
    }

    return 0;
}
