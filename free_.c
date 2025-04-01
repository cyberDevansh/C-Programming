#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
//clrscr();
int *ptr,num;
printf("Enter number of integers to be stored:");
scanf("%d",&num);
ptr=(int*)malloc(num* sizeof(int));
if(ptr==NULL)
{ printf("Memory is unavailable.");
exit(0);}
for(int i=0;i<num;i++)
{printf("Enter a integer %d=",i+1);
scanf("%d",ptr+i); }
printf("YOu entered\n");
for(int j=0;j<num;j++)
{printf("%d\t",*(ptr+j)); }
printf("\n");
free(ptr);
printf("After free up of memory\n");
for(int k=0;k<num;k++)
{printf("%d\t",*(ptr+k)); } //  in turbo c we see same value as I stored .The reason you're still seeing the exact values after freeing the memory is that free(ptr) deallocates the memory, but it doesn't necessarily clear out the data that was stored there. It simply marks that memory as available for future allocations.
// butr in turboo c we see random values
getch();
return 0; }
