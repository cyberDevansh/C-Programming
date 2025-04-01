#include <stdio.h>
#include <conio.h>
int main()
{
     // checking the number is pallindrom or not
     // clrscr();
    long int num, reverse = 0, original;
     printf("Enter a number:");
     scanf("%d", &num);
     original = num;
     do
     {
          reverse = reverse * 10 + num % 10;
          num = num / 10;

     } while (num!= 0);
if (original == reverse)
     {
          printf("%d is pallindrome number", original);
     }
     else
     {
          printf("%d is not pallindrome number ", original);
     }

     getch();
     return 0;
}