#include <stdio.h>
#include <conio.h>
int main()
{
  // checking whether a number is prime or not
  int num1, i;
  printf("enter a number:");
  scanf("%d", &num1);
  int a = 0;
  for (i = 2; i <= num1 / 2; i++)
  {
    if (num1 % i == 0)
    {
      a = 1;
      // break;
    }
  }
  if (a == 0)
    printf("%d is prime", num1);
  else
    printf("%d is not prime", num1);

  getch();
  return 0;
}