#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 
//clrscr();
char str[]="gopalji";
 printf("%s",strrev(str));
 printf("\n%s",strrev(str));///in this strrev will reverse again and this will print gopalji

//  or it can be done as :
// strrev(str);
// printf("%s",str);

getch();
return 0;
}