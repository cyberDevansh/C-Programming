#include <stdio.h>
#include <conio.h>
int main()
{
    // print number from 1 to 100 that are divisible by 3

    for (int a = 1; a <= 100; a++)
    {
        if (a % 3 == 0)
        {
            printf("%d\t", a);
        }
    }

    getch();
    return 0;
}