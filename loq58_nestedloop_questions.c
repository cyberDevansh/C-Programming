#include <stdio.h>
#include <conio.h>
int main ()
{
    // nested loop
    /* print this
1
22
333
4444
55555
*/

    for (int i =1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}