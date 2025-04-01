#include <stdio.h>
#include <conio.h>
int main()
{
// clrscr();
// implmenting pointers 
// * is indirection operator (also its called dereference operator) which gives value at address *(&str) it means value at address str.
int arr[3]={1,2,3};
int *ptr=&arr[3];
for(int i=0;i<3;i++)
{
     printf("value at index[%d]=%d and address= %u\n",i,*(&arr[i]),&arr[i]);
}
printf("\n");
for(int i=0;i<3;i++)
{
    ptr=&arr[i];
     printf("value at index[%d]=%d and address= %u\n",i,*ptr,ptr);
}

// NULL is usedin pointers and not in any other 
//like this
// ptr=NULL; //then ptr becomes 0;

getch();
return 0;
}