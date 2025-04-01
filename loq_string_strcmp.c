#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 
//clrscr();
int check,check2;
char str[]="gopalji";
char str2[]="gopalji";
char str3[]="ram";
printf("Comparing string str and str2:\n");
check=strcmp(str,str2);
if (check==0)
{printf("Both str and str2 string are equal.");}
else if (check>0)
{printf("string str is greater.");}
else if(check<0)
{printf("string str2 is greater.");}

printf("\nComparing string str and str3:");
check2=strcmp(str,str3);
if(check2==0)
{printf("\nstring str and str3 are equal.");}
else if (check>0)
{printf("\nstring str is greater.");}
else
printf("\nstring str3 is greater. ");

getch();
return 0;
}