#include <stdio.h>
#include <conio.h>
int main ()
{
  // fators of numbeer
  int number;
  printf("enter number:");
  scanf("%d",&number);
  printf("factor of %d are:\n",number);
  for(int i=1;i<=number;i++) 
  {
    if(number%i==0)
printf("%d\t",i);
  } 
    
    getch();
    return 0;
}