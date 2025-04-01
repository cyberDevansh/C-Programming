#include <stdio.h>
#include <conio.h>
int main ()
{
    //check whether a number is divisible by 5 and 15
    int a;
    printf("input a number:");
    scanf("%d",&a);
    if(a%5==0 && a%15==0)
{
    printf("%d is divisible by 5 and 15 both",a);
}
else
printf("number is not divisible by 5 and 15 both");

    
    
    getch();
    return 0;
}