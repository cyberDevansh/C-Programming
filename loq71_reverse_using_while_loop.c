#include <stdio.h>
#include <conio.h>
int main ()
{
    // reverse of number using while loop
    long int num,reverse=0;
    printf("enter a number(to reverse it):");
    scanf("%d",&num);
    while(num!=0)
    {
        reverse = reverse*10 + num %10;
        num =num /10;
    }
    printf("Reversed number=%d",reverse);
    getch();
    return 0;
}