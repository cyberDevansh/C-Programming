#include <stdio.h>
#include <conio.h>
int main ()
{
    // to implement break statement
    for (int i=1;i<=10;i++)
    {
        if(i==7)
        {
            break;
            }
        printf("i=%d\n",i);
    }
    getch();
    return 0;
}