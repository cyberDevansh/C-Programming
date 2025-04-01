#include <stdio.h>
#include <conio.h>
int main ()
{
 // to calculate sum of the first 100 natural numbers using do while loop
     //clrscr();
     int i=1,sum=0;
     do
     {
        sum+=i;
        ++i;
     }
     while(i<=100);
     printf("sum=%d",sum);
    
    getch();
    return 0;
}
/* SOME POINTS TO KEEP IN MIND SO ANOTHER METHOD BEACUSE BOTH ARE DIFFERENT WAY AND ITERATE DIFFERENTLY
{
 // to calculate sum of the first 100 natural numbers using do while loop
     //clrscr();
     int i=0,sum=0;
     do
     {
        ++i;
        sum+=i;
     }
     while(i<100);
     printf("sum=%d",sum);
    
    getch();
    return 0;
}
*/

