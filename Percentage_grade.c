#include<stdio.h>
int main()
{
    // Heading 
    printf("\n\nEnter subject marks below\n\n");

    //Getting Physics marks
    printf("Enter markes of Physics : ");
    int Physics_marks;
    scanf("%d",&Physics_marks);
    
    //Getting Chemistry marks
    printf("Enter markes of Chemistry : ");
    int Chemistry_marks;
    scanf("%d", &Chemistry_marks);
    
    //Getting Maths marks
    printf("Enter marks of Maths : ");
    int Maths_marks;
    scanf("%d",&Maths_marks);
    
    //Getting English marks
    printf("Enter marks of English : ");
    int English_marks;
    scanf("%d",&English_marks);
    
    //Getting EVS marks
    printf("Enter marks  of EVS : ");
    int EVS_marks;
    scanf("%d",&EVS_marks);
    
    //Percentage Formula
    int Final_percentage = (Physics_marks+Chemistry_marks+Maths_marks+EVS_marks+English_marks)/5;
    

    // Sum here
    
    int sum = Maths_marks+EVS_marks+English_marks+Chemistry_marks+Physics_marks;
    if (sum>500)
    {
        printf("You Entered Invalid Numbers\n");
    }
    else
    {
        printf("\nyour total marks out of 500 : %d\n", sum); 
    }
    
    //Final Result
    printf("\nYour Final Percentage is : %d%%\n\n", Final_percentage);


    // Grades Here

    if (Final_percentage>=90)
    {
        printf("Your Grade is : A");
    }
    else if (Final_percentage>=80)    
    {
        printf("Your Grade is : B");
    }
    else if (Final_percentage>=70)
    {
        printf("Your Grade is : C");
    }
    else
    {
        printf("Your Grade is : D");
    }    
    

    return 0;
}