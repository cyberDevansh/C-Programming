#include <stdio.h>
#include <conio.h>
int main()
{
    // print pyramid of stars
    //                    *
    //                   * *
    //                  * * *
    //                 * * * *
    int a, j;
    printf("enter number of lines you want to draw pyramid pattern:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (j = 1; j <= i;j++)
        {

            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}