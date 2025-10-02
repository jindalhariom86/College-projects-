#include <stdio.h>
int main()
{
    int Physics_marks, Chemistry_marks, Maths_marks, English_marks, EVS_marks, sum;
    float Final_percentage;

    printf("\n\nEnter subject marks below\n\n");


    printf("Enter marks of Physics : ");
    scanf("%d", &Physics_marks);

    printf("Enter marks of Chemistry : ");
    scanf("%d", &Chemistry_marks);

    printf("Enter marks of Maths : ");
    scanf("%d", &Maths_marks);

    printf("Enter marks of English : ");
    scanf("%d", &English_marks);

    printf("Enter marks  of EVS : ");
    scanf("%d", &EVS_marks);

    sum = Maths_marks + EVS_marks + English_marks + Chemistry_marks + Physics_marks;

    printf("\nyour total marks out of 500 : %d\n", sum);

    Final_percentage = sum / 5.0;

    printf("\nYour Final Percentage is : %.2f%%\n\n", Final_percentage);

    return 0;
}