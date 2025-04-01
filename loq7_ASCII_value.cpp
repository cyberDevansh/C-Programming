#include <stdio.h>
#include <conio.h>
int main ()
{
    //read character and print its ASCII value
    char a,b,c;
    printf("input a character value and press enter:");
    scanf("%c\n%c\n%c",&a,&b,&c);
    printf("ASCII value of %c %c %c is %d %d %d",a,b,c,a,b,c);

    
    
    getch();
    return 0;
}