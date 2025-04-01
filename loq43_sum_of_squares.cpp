#include <stdio.h>
#include <conio.h>
int main ()
{
    //print sum of squares of numbers from 1 to 10
    int num1,sum=0;
    for (int i=1;i<=10;i++)
    {
        sum+=i*i;
    }
    printf("Sum o f squares of numbers from 1 to 10 is %d ",sum);

    
    
    getch();
    return 0;
}