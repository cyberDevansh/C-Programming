#include <stdio.h>
#include <conio.h>
int main ()
{
    //swapping of two numbers using XOR operator
    //XOR =exclusive or
    int num1,num2;
    printf("enter number1:");
    scanf("%d",&num1);
    printf("enter number2:");
    scanf("%d",&num2);
    printf("BEFORE SWAPPING:\nnumber1=%d\nnumber2=%d\n",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("AFTER SWAPPING:\nnumber1=%d\nnumber2=%d",num1, num2);


    
    getch();
    return 0;
}