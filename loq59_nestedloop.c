#include <stdio.h>
#include <conio.h>
int main ()
{
   // nested loop
   /*
1
12
123
1234
12345
    */
   for(int i=1;i<=5;i++)
   {
    for(int j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
   }
    getch();
    return 0;
}