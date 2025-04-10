#include <stdio.h>
#include <conio.h>
int main ()
{
    /*printing palindrome pattern
    1
   121
  12321
 1234321
123454321
*/

for(int j=1;j<=5;j++)
{
    for(int i=4; i>=j; i--)
{
    printf(" ");
}
for(int k=1;k<=j;k++)
{
    printf("%d",k);
}
for(int l=j-1;l>=1;l--)
{
    printf("%d",l);
}
printf("\n");
}
    
    getch();
    return 0;
}