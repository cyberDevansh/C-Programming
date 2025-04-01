#include <stdio.h>
#include <conio.h>
int main ()
{
    //to implement auto storage class
    //  all undefined  storage class is auto storage class
    auto int num1=10;
    int num2=20;
    //here both storage is auto even after not defining num2 storage
    printf("a=%d,b=%d",num1 ,num2);
    
    getch();
    return 0;
}
// ALL ABOUT AUTO STORAGE CLASS
/*
STORAGE :IN THE MEMORY
DEFAULT VALLUE:GARBAGE(UNPREDICTABLE)
SCOPE:IN THE BLOCK WITHIN IT IS DECLARED
LIFETIME:DURATION OF BLOCK 
INTITIALIZATION:NOT INITIATED BY DEFAULT ALL ARE AUTO.OR WE CAN INTITIATED BY AUTO KEYWORD
*/