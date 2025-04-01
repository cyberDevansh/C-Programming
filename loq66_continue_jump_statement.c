#include <stdio.h>
#include <conio.h>
int main ()
{
    printf("1 TO 50 NUMBERS EXCEPT DIVISIBLE BY 5:\n");
  
    for (int i =1;i<=20;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\t",i);
    }


    getch();
    return 0;
}