#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 
//clrscr();
char str[]="DEVANSH";
strlwr(str);
printf("%s",str);

// or directly it can be done as 
// printf("%s",strlwr(str));

 
getch();
return 0;
}