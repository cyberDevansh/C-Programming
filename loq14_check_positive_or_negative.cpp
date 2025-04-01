#include <stdio.h>
#include <conio.h>
int main ()
{
    //check whether the number is positive ,negative or zero.
    int num;
    printf("input a number :");
    scanf("%d",&num);
    if(num==0)
{printf("neither negative nor positive");}
else if (num>=1)
{printf("positive integer value");}
else 
printf("negative");
    
    getch();
    return 0;
}