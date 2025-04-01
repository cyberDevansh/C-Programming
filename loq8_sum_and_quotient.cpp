#include <stdio.h>
#include <conio.h>
int main()
{
    // read two numbers and print their sum ,difference and quotient
    //we(+god) done typecasting in this also at the last print statement
    int a, b, s, d, q;
    printf("input two numbers:");
    scanf("%d\n %d", &a, &b);
    // s = a + b;
    // d = a - b;
    // q = a / b;
    printf("sum=%d\n difference=%d\n quotient=%f",a+b,a-b,(float)a/b);

    getch();
    return 0;
}