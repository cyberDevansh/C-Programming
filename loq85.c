#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
//checking index of the array 
int n=4;
int arr[n];
for (int i=3;i<7;i++)
{
     printf("Value at index[%d]:",i);
     scanf("%d",&arr[i]);
}
printf("\nprinting values\n");
for (int i=3;i<7;i++)
{
     printf("value stored at index [%d] is %d\n",i,arr[i]);
}

// here output is coming wrong as it will only create 4 indexes from 0 to 3 and other indexes are undefined behavoiur

getch();
return 0;
}