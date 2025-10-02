#include <stdio.h>
int main()
{
    // Circumference and Area Calculator
    float r, circum, Area;

    printf("Here is Your Favourite Circumference and Area Calculator, But before That you need to Enter Radius of that Circle \n\n");

    printf("Please enter Your Radius Here : ");
    scanf("%f", &r);

    printf("Your Given Radius is : %.2f\n\n", r);
    
    circum = r * 3.14 * 2;
    Area = 3.14 * r * r;
    
    printf("Here is your Circumference of the Cricle : %.2f \nAnd the Area of the Circle is : %.2f \n\n", circum, Area);

    return 0;
}
