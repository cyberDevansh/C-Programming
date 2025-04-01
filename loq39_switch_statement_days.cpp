#include <stdio.h>
#include <conio.h>
int main ()
{
    //taking the output days number
    //we can use switch statement to give even one output or for multiple output (by not using break statement after every case)
    int day_number;
    printf("enter the number of day(1-7):");
    scanf("%d",&day_number);
    switch(day_number)
    {
    case 1:
    printf("sunday\n");
    break;
    case 2:
    printf("monday\n");
    break;
    case 3:
    printf("tuesday\n");
    break;
    case 4:
    printf("wednesday\n");
    break;
    case 5:
    printf("thursday\n");
    break;
    case 6:
    printf("friday\n");
    break;
    case 7:
    printf("saturday\n");
    break;
    default :
    printf("invalid input");
    break;
    }
    
    getch();
    return 0;
}