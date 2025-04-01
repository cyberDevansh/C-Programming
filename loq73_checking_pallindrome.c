#include <stdio.h>
#include <conio.h>
int main ()
{
   // checking whether the number is palindrome or not
   int num,original,reverse=0;
   printf("Enter a number:");
   scanf("%d",&num);
   original =num;
   while (num!=0)
   {
    reverse =reverse * 10 + num% 10;
    num/=10;
   }
   if(original ==reverse)
   {
    printf("%d is palindrome",original );
   }
   else 
   {
    printf("%d is not palindrome",original);
   }
    getch();
    return 0;
}