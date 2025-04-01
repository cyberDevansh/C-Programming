// (in the java and c copy) passing array to a function
#include <stdio.h>
#include <conio.h>
void display1(int);
void display2(int *);

int main()
{
 
//clrscr();
int i;
int marks []={55,60,80,70,90,101,12};
for (i=0;i<7;i++)
{
     display1 (marks[i]);
     // return 0;
}
for (i=0;i<7;i++)
{
     display2(&marks[i]);
     // return 0;
}
getch();
return 0;
}
void display1 (int m)
{ printf("%d\t",m); }
void display2(int*n)
{printf("%d\n",*n);}
 
