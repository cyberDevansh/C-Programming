#include <stdio.h>
#include <conio.h>
int main()
{
    // finding grade of a student baaased on marks
    int marks;
    ;
    printf("enter the marks out of 100:");
    scanf("%d", &marks);
    if (marks >= 90 && marks<=100)
    {
        printf("grade A");
    }
    else if (marks >= 80 && marks<90)
    {
        printf("grade B");
    }
    else if (marks >= 70 && marks<80)
    {
        printf("grade C");
    }
    else if (marks >= 60 && marks<70)
    {
        printf(" grade D");
    }
    else if (marks >= 50 && marks<60)
    {
        printf("grade E");
    }
    else if(marks<50 && marks>=0)
       {printf("failed");}
       else
       printf("invalid input");
       
    getch();
    return 0;
}