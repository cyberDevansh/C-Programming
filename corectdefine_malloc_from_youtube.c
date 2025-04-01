#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
 
//clrscr();
int *ptr,n=5;

// dynamic memory allocation using malloc 
ptr=(int*) malloc(n*sizeof(int));   //  this is the declaration of the malloc

// get the elemeent of the  array 
for(int i=0;i<n;i++)
{
     ptr[i]=i+1;
}

//printing elements of the array
printf("The elements of the array are:\n");
for(int i=0;i<n;i++)
{
     printf("%d\n",ptr[i]);
}

printf("\nSIZE=%d",sizeof(ptr));

getch();
return 0;
}