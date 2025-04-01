#include <stdio.h>
#include <conio.h>
int main()
{
    int i = 5;

    //-----post increment-----
    // we use normal logic like use and then increase
    // i = i++ + i++;  i=11
    // i = i++ + ++i;  i=12
    // i = i++ + --i;  i=10
    // i = i++ + i--;  i=11
    // i = i++ - i++;  i=-1
    // i = i++ - ++i;  i=-2
    // i = i++ - i--;  i=-1
    // i = i++ - --i;  i=0

    //------pre increment------
    //calculate normal then add or subtract 1 by seeing after operator that whether we adding increment or decrement i
    // i = ++i + i++;  i=13
    // i = ++i + ++i;  i=14
    // i = ++i + --i;  i=10
    // i = ++i + i--;  i=11
    // i = ++i - i++;  i=1
    // i = ++i - ++i;  i=0
    // i = ++i - i--;  i=-1
    // i = ++i - --i;  i=0

    //------post decrement------
    // i = i-- + i++;  i=9
    // i = i-- + ++i;  i=10
    // i = i-- + --i;  i=8
    // i = i-- + i--;  i=9
    // i = i-- - i++;  i=1
    // i = i-- - ++i;  i=0
    // i = i-- - i--;  i=1
    // i = i-- - --i;  i=2

    //----- pre decrement--------
    // i = --i + i++;  i=9
    // i = --i + ++i;  i=10
    // i = --i + --i;  i=6
    // i = --i + i--;  i=7
    // i = --i - i++;  i=1
    // i = --i - ++i;  i=0
    // i = --i - i--;  i=-1
    // i = --i - --i;  i=0

    printf("i = %d", i);

    getch();
    return 0;
}