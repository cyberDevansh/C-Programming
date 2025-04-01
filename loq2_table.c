#include <stdio.h>
#include <conio.h>
int main()
{//table of number
    int a, b = 1;
    printf("enter a number =");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        b = a * i;
        printf("%d * %d = %d\n",a,i,b);
    }


getch();
return 0;
}