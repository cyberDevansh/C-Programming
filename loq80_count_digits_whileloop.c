#include <stdio.h>
#include <conio.h>
int main()
{
     //count digits in the number usin g while loop
// clrscr();
int digit,num,count=0;
printf("enter the number:");
scanf("%d",&num);
do 
{
     digit=num%10;
     num=num/10;
     count++;
}
while(num!=0);
printf("Number of digits=%d",count);


getch();
return 0;
}