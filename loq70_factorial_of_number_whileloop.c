#include <stdio.h>
#include <conio.h>
int main ()
{
    // to calculate factorial of give number using while loop
    int num,i=1,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Factorial of given number is:");
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    
    getch();
    return 0;
}