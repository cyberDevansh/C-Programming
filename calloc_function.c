#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
 
//clrscr();
int *ptr,num;


//taking elements of the array
printf("Enter number of integers to be entered:");
scanf("%d",&num);

ptr=(int*) calloc(num,sizeof(int));//calloc declaration
if(ptr==NULL)
{
     printf("Memory not available");
     exit(1);
}

for(int i=0;i<num;i++)
{
    printf("Enter an integer %d:",i+1);
    scanf("%d", ptr+i);
}
printf("\nYou entered:\n");
for(int i=0;i<num;i++)
{
    printf("%d\t",*(ptr+i));
}

getch();
return 0;
}