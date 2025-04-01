#include <stdio.h>
#include <conio.h>
int main()
{
 
//clrscr();
char str[]={"anurag","devansh","cse"};
printf("%d",str);
printf("%u",&str);
printf("%s",str + 1);
printf("%s",*(str +1)); 
 getch();
return 0;
}