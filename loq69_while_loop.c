#include <stdio.h>
#include <conio.h>
int main ()
{
    // to implement while loop
    // sum of first 50 natural numbers 
int num=1 ,sum=0;
while(num<=50)
{
    sum+=num;
    num++;
}


 printf("sum of first 50 natural numbers =%d",sum); 
    getch();
    return 0;
}
