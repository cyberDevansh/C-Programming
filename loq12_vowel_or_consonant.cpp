#include <stdio.h>
#include <conio.h>
int main ()
{
    //check whether the alphabet is consonant or vowel
    char charctr;
    printf("input a charcter :");
    scanf("%c",&charctr);
    if(charctr=='a' || charctr=='e' ||charctr=='i' ||charctr=='o'||charctr=='u'||charctr=='A'||charctr=='E'||charctr=='I'||charctr=='O'||charctr=='U')
    {
        printf("it is vowel");
    }
    else
    {
    printf("it is consonant");
    }
    


    

    
    
    getch();
    return 0;
}