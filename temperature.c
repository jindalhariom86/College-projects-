#include <stdio.h>
int main()
{
    // Here is your Centigrade to Fahrenite Converter
    
    float centi, fahr;
    printf("\n\nHere is your Centigrade to Fahrenite Converter\n\n");

    printf("To convert Centigrade to Fahrenite we need Temprature in Centigrade\n");

    printf("Please enter temprature in Centigrade : ");
    scanf("\n%f", &centi);

    printf("Given Temprature is %.2f%cC\n", centi, 248);
    
    fahr = (centi * 9 / 5) + 32;

    printf("Here is your Temprature in Fahrenite : %.2f%cF\n\n", fahr, 248);
    
    return 0;
}
