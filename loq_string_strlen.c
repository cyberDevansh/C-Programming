#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 
//clrscr();
char str[]="naina";
int length;
length=strlen(str);
printf("%d",length);

// or we can do this without declaring length:
// printf("%d",strlen(str));

 
getch();
return 0;
}