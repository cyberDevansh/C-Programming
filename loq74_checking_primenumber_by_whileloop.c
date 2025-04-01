#include <stdio.h>
#include <conio.h>
int main ()
{
   // checking whether a number is prime or not using while loop
    int num, isprime=1;
    printf("Enter a number:");
    scanf("%d",&num);
    int i=2;
    while(i<=num/2)
    {
        if(num%i==0)
{
    isprime=0;
    break;
}
i++;
    }
    if (isprime=1)
    { 
        printf("%d is a prime number.",num);
    }
    else
    {
        printf("%d is not a prime nummber.",num);
    }
    getch();
    return 0;
}