#include <stdio.h>
#include <conio.h>
int main()
{
    // reverse of number
    int num1,digit;
    printf("enter a number:");
    scanf("%d",&num1);
    printf("reverse of number:");
    while(num1!=0)
    {
        digit=num1%10;
        num1=num1/10;
        printf("%d",digit);
    }
    getch();
    return 0;
}