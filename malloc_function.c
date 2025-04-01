#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()

{
     //clrscr();
     int x=10;
     int *ptr=&x;
     ptr=(int*) malloc (sizeof(int));
     printf("%d\n",*(&ptr));
     printf("%d\n",&ptr);
     printf("%d\n",*ptr);
     printf("%d\n",ptr);
     printf("%d\n",x);
     printf("%d",&x);

     getch();
     return 0;
}