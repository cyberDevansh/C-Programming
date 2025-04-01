#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
int i=0,num=10;
do {
     printf("beforei=%d \t",i);
     i++;
     int sum=sum+i;

     printf("after i=%d sum=%d\n",i,sum);
}
while(i<num);



getch();
return 0;
}