#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
long int reverse=0,num1;
printf("Enter a number:");
scanf("%ld",&num1);
printf("before reversing number=%d",num1);
do 
{
     reverse=reverse*10+num1%10;
     num1=num1/10;
}
while(num1!=0);
printf("\naftfer reversing number=%d",reverse);
getch();
return 0;
}