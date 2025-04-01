#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
// implement of goto jump statement 
int num,sum=0;
printf("Enter a number :");
scanf("%d",&num);
for (int i = 1.0; i <=num; i++)
{
     if (i==num/2)
     {
          goto increase;
        
     }
     printf("%d\t",(char)i);
     
}
     increase:



getch();
return 0;
}