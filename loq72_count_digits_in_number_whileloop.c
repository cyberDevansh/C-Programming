#include <stdio.h>
#include <conio.h>
int main ()
{
    // count digits in a number
    long long int num;
    int count=0,digit;
    printf("Enter a number :");
    scanf("%lld",&num);
    printf("number of digits=");
    while(num!=0)
    {
        
        num=num/10;
        count++;

    }
    printf("%d",count);
    
    getch();
    return 0;
}