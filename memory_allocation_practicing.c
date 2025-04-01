#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
 
//clrscr();


int *ptr;
ptr=(int*) malloc(10*sizeof(int));
for (int i=0;i<3;i++)
{
     printf("The value at %d of this arrayy \n",i,ptr[i]);
     scanf("%d",&ptr[i]);
}
 
getch();
return 0;
}