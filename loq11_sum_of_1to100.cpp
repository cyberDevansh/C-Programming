#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 0;
    // sum of all even numbers from 1 to 100

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            a = a + i;
            // printf("%d+%d",i,0);
        }
    }
    printf("sum of even numbers from 1 to 100 =%d", a);
    getch();
    return 0;
}