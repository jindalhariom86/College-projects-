#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter value to Swap  here \n\n");

    printf("Enter the value of 'a' : ");
    scanf("%d", &a);

    printf("Enter the value of 'b' : ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("New value of 'a' is : %d\nNew value of 'b' is : %d\n", a, b);

    return 0;
}
