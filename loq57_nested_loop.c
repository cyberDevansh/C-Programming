#include <stdio.h>
#include <conio.h>
int main()
{
    // to implement nested loop        "REMEMBER THAT FIRST FOR LOOP WORKFOR ROWS AND SECOND WORKFOR COLUMNS"
    /*print this 
*
**
***
****
*****
    */
for (int i=1;i<=5;i++)
{
  for(int j=1;j<=i;j++)
  {
    printf("*");
  }
  printf("\n");
}  
    getch();
    return 0;
}