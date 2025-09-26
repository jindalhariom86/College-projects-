#include <stdio.h>
int main()
{
    printf("Enter value to Swap  here \n\n");
    printf("Enter the value of 'a' : ");
    
    //Getting Input
    int a,b,c;
    scanf("%d",&a);
    printf("Enter the value of 'b' : ");
    scanf("%d", &b);

    //Swaping
    c=b;
    b=a;
    a=c;
    printf("New value of 'a' is : %d\n", a);
    printf("New value of 'b' is : %d\n", b);


    return 0;
}