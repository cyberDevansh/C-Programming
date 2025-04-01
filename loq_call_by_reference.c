#include <stdio.h>
#include <conio.h>
void swap(int *,int *);

int main()
{
 
//clrscr();
int a,b;
printf("Enter number1:");
scanf("%d",&a);
printf("Enter the number2:");
scanf("%d",&b);
swap(&a,&b);
 
getch();
return 0;
}  
void swap(int *x,int *y)
{
     printf("\nBefore swapping\nnumber1=%d\tnumber2=%d",*x,*y);

     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
     // printf("Address\nx=%d\ny=%d\n",x,y); its just to check address that adress changes or not (address of x and y will remain samme only the value stored in it will change that why it print same address even after swapping)
     printf("\nAfter swappig\nNumber1=%d\tNumber2=%d\n",*x,*y);

}