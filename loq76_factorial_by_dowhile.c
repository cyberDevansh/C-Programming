#include <stdio.h>
#include <conio.h>
int main ()
{
    // to calculate factorial of given number using do while loop
    int fact=1,i=1,terms;
    printf("Enter number of terms:");
    scanf("%d",&terms);
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=terms);
    printf("Factorial =%d",fact);
    
    getch();
    return 0;
}
