#include <stdio.h>
#include <conio.h>
int main()
{
 
//clrscr();
int *ptr;
for(int i=0;i<5;i++)
{
     printf("enter a integer %d:",i+1);
     scanf("%d",ptr+i);
}
printf("\nYou entered :\n");
for(int i=0;i<5;i++)
{
     printf("Integer %d : %d\n",i+1, *ptr + i);  // use more like this   presently ii dont have much time so i am leaving htis topic here but when you  see this pls learn this topic
}
 
getch();
return 0;
}