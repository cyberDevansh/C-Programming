#include <stdio.h>
 int main()
 {
    int a = 10, b = 20;
    printf("Before swapping a = %d and b = %d\n", a, b);
    a=a+b-(b=a);
    printf("After swapping a = %d and b = %d\n", a, b);
    return 0;
 }