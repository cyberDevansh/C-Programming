#include <stdio.h>
#include <conio.h>
int main()
{ // clrscr();
     int num;
     start:
     printf("1.Factorial of number\n2.Prime or not\n3.Odd or Even\n4.Exit\n");
     printf("Choose one option by typing index number:");
     scanf("%d", &num);     
               switch (num)
               {
               case 1:
                    {int a;
                    int b = 1;
                    printf("\nEnter a number=");
                    scanf("%d", &a);
                    for (int i = 1; i <= a; i++)
                         b = b * i;
                    printf("\nfactorial(or say %d!) =%d\n\n", a, b);
                    goto start;}
               case 2:
                    {int num1, j;
                    printf("\nEnter a number:");
                    scanf("%d", &num1);
                    int mn = 0;
                    for (j = 2; j <= num1 / 2; j++)
                    {
                         if (num1 % j == 0)
                         {
                              mn = 1;
                         }
                    }
                    if (mn == 0)
                         printf("%d is prime\n\n", num1);
                    else
                         printf("%d is not prime\n\n", num1);
                    goto start;}
               case 3:
                    {int num2;
                    printf("\nEnter a number:");
                    scanf("%d", &num2);
                    if (num2 % 2 == 0)
                    {
                         printf("Entered number is even.\n\n");
                    }
                    else
                    {
                         printf("Entered number is odd.\n\n");
                    }
                    goto start;}
               case 4:
                   { goto end;}

               default:
                    printf("Invalid input.\n");
               }
     
end:
     printf("Exiting loop.");
     getch();
     return 0;
}