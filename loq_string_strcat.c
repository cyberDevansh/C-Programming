#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 
//clrscr();
char str[]="naina ";
 char str2[]="gupta";
 printf ("Before:\n");
 printf("str=%s\nstr2=%s",str,str2);
 strcat(str,str2);
 printf("\n\nAfter:");
 printf("\nstr=%s\nstr2=%s",str,str2);

getch();
return 0;
}