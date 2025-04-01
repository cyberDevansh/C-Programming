#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
// 2d array i.e.two element ar[2][2] or ar[2][3] or ar[3][3]
int ar[3][3];
printf("Enter the elements of arrray:\n");
for(int i=0;i<3;i++)
{
     for(int j=0;j<3;j++)
     {
     printf("At index[%d][%d]=",i,j);
     scanf("%d",&ar[i][j]);
     }
}
printf("\nYour entered matrix:\n");
for(int i=0;i<3;i++)
{
     for(int j=0;j<3;j++)
     {
     printf("%d\t",ar[i][j]);
     }
     printf("\n");
}

getch();
return 0;
}