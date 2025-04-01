#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2;
    printf("input two numbers:\nnum1:\nnum2:\n");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is larger", num1);
    }
    else
        printf("%d is larger", num2);

    getch();
    return 0;
}