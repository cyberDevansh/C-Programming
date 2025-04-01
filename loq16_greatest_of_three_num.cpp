#include <stdio.h>
#include <conio.h>
int main()
{
    // find greatest of three number
    int a, b, c;
    printf("input three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else
    {
        printf("%d is greatest", c);
    }

    getch();
    return 0;
}