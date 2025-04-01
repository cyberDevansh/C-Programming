#include <stdio.h>
#include <conio.h>
int main()
{
    // print sum of digits of given number
    int num1, digit, sum = 0;
    printf("enter a number:");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        digit = num1 % 10;
        num1 = num1 / 10;
        sum = sum + digit;
    }
    printf("sum of digits=%d", sum);

    getch();
    return 0;
}