#include <stdio.h>
#include <conio.h>
int main ()
{
    //armstrong number
    //a number which is the sum of cubes of its digits example 0,1,153 etc 
    int num,original,sum=0;

    printf("enter a number:");
    scanf("%d",&num);
    original= num;
    while(num!=0)
    {
        int digit=num%10;
        sum+=digit*digit*digit;
        num=num/10;

    }
    if (sum==original)
    printf("%d is the armstrong number",original);
    else 
    printf("%d is not an armstrong number",original);
    getch();
    return 0;
}