#include <stdio.h>
#include <conio.h>
int main()
{
  // just checking output by different codes
  //     int i=1;
  //      while (i<=10);
  //     {

  //     //     printf("%d",i);
  //     //     i=i+1;
  // }
  int i = 0,y=0;
  
    while (++i <= 10 && y++ <=10)
    {
      printf("i=%d\t\n \t\ty=%d\n", i,y);
    }
  
  
  getch();
  return 0;
}