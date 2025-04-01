#include <stdio.h>
#include <conio.h>
void increment();
int main()
{
    // to implement static storage class

    /*
    ALL ABOUT STATIC STORAGE CLASS
    STORAGE: IN THE MEMORY
    DEFAULT VALUE :0
    SCOPE :LIMITED TO THE FILE IN WHICH THE VARIABLE IS DEFINED AND THE VALUE OF
    VARIABLE PERSISTS BETWEEN DIFFERENT FUNCTION CALLS
    LIFETIME: TILL THE PROGRAM
    */
    increment();
    increment();
     increment();
    increment ();
    getch();
    return 0;
}
void increment()
{
    auto int i = 1;
    static int j = 1;
    i = i + 1;
    j = j + 1;
    printf("i=%d j=%d\n", i, j);

   
}