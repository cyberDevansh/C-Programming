#include <stdio.h>
#include <conio.h>
#define n 7
int main()
{
     //use of array
// clrscr();
int ar[n];
for (int i = 0; i <7; i++)
{
     printf("Enter the value at index[%d]:",i);
     scanf("%d",&ar[i]);
}
for (int i = 0; i < 7; i++)
{
     printf("\nValue at index [%d] is %d",i,ar[i]); 
}



getch();
return 0;
}