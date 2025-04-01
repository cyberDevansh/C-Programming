// swapping of two number using call by value and call by function
#include <stdio.h>
#include <conio.h>
void swapping(int num,int num2)
{
int temp;
printf("Before swapping\nnum1=%d\nnum2=%d",num,num2);
temp= num;
num=num2;
num2=temp;
printf("\nAfter swapping\nnum1=%d\nnum2=%d\n",num,num2);
}
int main()
{
 int num,num2;
//clrscr();
swapping(4,5);
// printf("\nnum1=%d\nnum2=%d",num,num2);      if this is added then num and num2 will be garbage value because num and num2 is not the actual input.
 swapping (6,7);

getch();
return 0;
}