#include <stdio.h>
#include <conio.h>
int main()
{
    // swapping of two numbers using third variable
    int a, b, c; // c is temporary variable
    printf("input two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("BEFORE SWAPPING:\nnumber1=%d\nnumber2=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("AFTER SWAPPING:\nnumber1=%d\nnumber2=%d", a, b);

    getch();
    return 0;
}