#include <stdio.h>
#include <conio.h>
int main ()
{
    // to implement comma as separator and as operator
    int a, b;
    // comma as separator
    a=10,20,30;
    // comma as operator
    b=(11,12,13);
    printf("a(comma as separator)=%d\nb(comma sas operator)=%d",a,b);
    
    getch();
    return 0;
}