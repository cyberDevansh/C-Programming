#include <stdio.h>
#include <conio.h>
int main ()
{
    //swapping of two numbers without using third variable
    //I M USING ADDITION AND SUBTRACTION METHOD
    //It is also called swapping using increment decrement
    int num1,num2;
    printf("enter num1=");
    scanf("%d",&num1);
    printf("enter num2=");
    scanf("%d",&num2);
    printf("BEFORE SWAPPING:\nnum1=%d\nnum2=%d\n",num1,num2);
    num1=num1 + num2;
    num2=num1- num2;
    num1=num1- num2;
    printf("AFTER SWAPPING:\nnum1=%d\nnum2=%d",num1,num2);
    
    
    getch();
    return 0;
}