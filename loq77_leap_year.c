#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
// whether a year is leap year or not
// a year will be leap year if it is divisible by 4 but not divisible by 100 or just divisible by 400.
long int year;
printf ("enter a year:");
scanf("%d",&year);
if ((year%4 ==0 && year%100 !=0) || (year%400==0))
{
     printf("Entered year is leap year");
}
else 
printf("entered year is not leap year."); 
getch();
return 0;
}