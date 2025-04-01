#include <stdio.h>
#include <conio.h>
int main ()
{
    // nested loop
    //Write a C program to print the multiplication table for numbers from 1 to 5:
    
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    getch();
    return 0;
}