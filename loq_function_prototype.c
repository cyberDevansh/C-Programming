#include <stdio.h>
#include <conio.h>
void swapping(int,int);  // this is function prototype which must be declared before function if if function is defined after main().
int main()
{
 int num,num2;
//clrscr();
swapping(4,5);

swapping (6,7);

getch();
return 0;
}
void swapping(int num,int num2)
{
int temp;
printf("Before swapping\nnum1=%d\nnum2=%d",num,num2);
temp= num;
num=num2;
num2=temp;
printf("\nAfter swapping\nnum1=%d\nnum2=%d\n",num,num2);
}
/*
if we declare function before main() then there is no need of function prototype 

#include <stdio.h>
#include <conio.h>
void swapping(int num,int num2)
{
int temp;
printf("Before swapping\nnum1=%d\nnum2=%d",num,num2);
temp=num;
num=num2;
num2=temp;
printf("After swapping\nnum1=%d\nnum2=%d",num,num2);
}
int main()
{
 
//clrscr();
swapping(3,4);
swapping(6,7);
 
getch();
return 0;
}
*/