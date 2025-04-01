#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
//implementing break statement
int num;
printf("enter a number");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
     if(i== num/2)
     {
          break;
     }
printf("%d",i);

}

     
getch();
return 0;
}