#include <stdio.h>
#include <conio.h>
int main()
{
     //implementing pointer to pointer
// clrscr();
int x=10;
int *ptr=&x;
int **ptr1=&ptr;
int ***ptr2=&ptr1;
printf("address of:\n x= %u \t ptr=  %u \t ptr1=  %u\t ptr2= %u",ptr,ptr1,ptr2,&ptr2);
printf("\nVALUES are:\n x=%d\t ptr=%d\t ptr1=%d \t ptr2=%d",*ptr,**ptr1,***ptr2,****(&ptr2));
printf("\nADDRESS OF :\n x=%u \t ptr=%u\t ptr1=%u \t ptr2=%u",&x,&ptr,&ptr1,&ptr2);
printf("\nVALUES are:\n x=%d\t ptr=%d\t ptr1=%d \t ptr2=%d",*(&x),*(&ptr),*(&ptr1),*(&ptr2));
getch();
return 0;
}