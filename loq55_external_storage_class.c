#include <stdio.h>
#include <conio.h>
int x = 11;
int main()
{
    // to implement external storage class
    extern int y;

    printf("x=%d\ny=%d", x, y);

    getch();
    return 0;
}
int y=108;



/*
ALL ABOUT EXTERN STORAGE CLASS
STORAGE : IN THE MEMORY
DEFAULT VALUE: 0
LIFETIME: TILL THE END OF PROGRAM
SCOPE: GLOBAL (THROUGHOUT THE PROGRAM)
INITIALIZATION: INTIALIZED BY EXTERN KEYWORD AND DECLARED OUTSIDE THE BLOCK
*/

