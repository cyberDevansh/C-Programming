#include <stdio.h>
#include <conio.h>
int main ()
{
    //factorial by while looop
     int num1, j = 1, factorial = 1;
        printf("enter a number:");
        scanf("%d", &num1);
       
        while (j <= num1)
        {
            factorial = factorial * j;
            j++;
        }
        printf("Factorial of %d is :%d", num1, factorial);
    
    getch();
    return 0;
}