#include <stdio.h>
#include <conio.h>
int main ()
{
    int y=0;
//print sum of numbers from 1 to 10 using for loop
for (int i=1;i<=10;i++)
{
    y=y+i;
} 
    printf("sum of numbers from 1 to10 is %d",y);
    
    getch();
    return 0;
}