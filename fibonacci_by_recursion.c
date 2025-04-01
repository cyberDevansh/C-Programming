#include <stdio.h>
#include<conio.h>
int fibo(int term)
{
     if (term<=1 )
     { return term; }
     else
     {
     return fibo(term-1) + fibo(term-2);
     }
}
int main()
{
     int term1,i;
     printf("Enter the number of terms:");
     scanf("%d",&term1);
     printf("Fibonacci series:");
     for(i=0;i<term1;i++)
     {
     printf("%d\t",fibo(i));
     }
     printf("\n");

     getch();
     return 0;
}