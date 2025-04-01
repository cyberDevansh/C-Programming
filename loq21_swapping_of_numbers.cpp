#include <stdio.h>
#include <conio.h>
int main ()
{
    //swapping of two numbers using multiplication and division
    int num1, num2;
    printf("enter num1=");
    scanf("%d",&num1);;
    printf("enter num2=");
    scanf("%d",&num2);
    printf("BEFORE SWAPPING:\nnum1=%d\nnum2=%d\n",num1,num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("AFTER SWAAPING:\nnum1=%d\nnum2=%d",num1,num2);
    
    
    getch();
    return 0;
}