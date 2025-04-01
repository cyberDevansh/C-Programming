#include <stdio.h>
#include <conio.h>
int main ()
{
    //print even and odd numbers from 1 to 20 using for looop
    //even
    printf("even numbers from 1 to 20 are:\n");
   { for(int i=1;i<=20;i++)
    {
if(i%2==0)
        printf("%d\t",i);
    }
   }
   //odd
   printf("\nodd numbers from 1 to 20 are:\n");
    {
        for(int i=1;i<=20;i++)
    {
if(i%2!=0)
printf("%d\t",i);

    }
    }
   
    getch();

    return 0;
}