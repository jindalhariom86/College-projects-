#include <stdio.h>
int main()
{
    int Physics_marks, Chemistry_marks, Maths_marks, English_marks, EVS_marks, sum;
    float Final_percentage;

    printf("\n\nEnter subject marks below\n\n");

    printf("Enter markes of Physics : ");
    scanf("%d", &Physics_marks);

    printf("Enter markes of Chemistry : ");
    scanf("%d", &Chemistry_marks);

    printf("Enter marks of Maths : ");
    scanf("%d", &Maths_marks);

    printf("Enter marks of English : ");
    scanf("%d", &English_marks);

    printf("Enter marks  of EVS : ");
    scanf("%d", &EVS_marks);

    Final_percentage = (Physics_marks + Chemistry_marks + Maths_marks + EVS_marks + English_marks) / 5;

    sum = Maths_marks + EVS_marks + English_marks + Chemistry_marks + Physics_marks;

    printf("\nyour total marks out of 500 : %d\n", sum);

    printf("\nYour Final Percentage is : %d%%\n\n", Final_percentage);

    if (Final_percentage >= 90)
    {
        printf("Your Grade is : A");
    }
    else if (Final_percentage >= 80)
    {
        printf("Your Grade is : B");
    }
    else if (Final_percentage >= 70)
    {
        printf("Your Grade is : C");
    }
    else
    {
        printf("Your Grade is : D");
    }

    return 0;
}
